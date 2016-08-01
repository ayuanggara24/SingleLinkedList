#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip> //setw()
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node {
	int data;
	node* next; // untuk menghubungkan dengan node lain,tipe data dibuat seperti aturan penggunaan pointer
};

node* head;
node* tail;
node* curr;
node* entry;
node* del;

void inisialisasi ()
{
	head = NULL;
	tail = NULL;
}

void input (int dt)
{
	entry = (node* )malloc(sizeof(node));
	entry-> data = dt;
	entry-> next = NULL;
	if (head==NULL)
	{
		head = entry;
		tail = head;
	}
	else
	{
		tail->next = entry;
		tail = entry;
	}
}

void cetak()
{
	curr = head;
	if(head == NULL)
	cout<<"\nTidak ada data dalam linked list" <<endl;
	else
	{
		cout<<"\nData yang ada dalam linked list adalah " <<endl;
		cout<<setw(6);
		while(curr!=NULL)
		{
			cout<<curr->data<<"->";
			curr = curr->next;
		}
		cout<<"NULL";
		cout<<endl;
	}
	
}

void hapus()
{
	int simpan;
	if(head==NULL)
	{
		cout<<"\nLinked list kosong, pengahapusan tidak dapat dilakukan"<<endl;
	}
	
}