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