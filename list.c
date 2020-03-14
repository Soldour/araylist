#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 

 struct node
{
	int data;
	struct node* next;

}  *head;

void creatLinkList(int n);
void deletAllElement(int  key);
void deletElemntByIndex(int index);
_Bool get_Element_ByValue(int elemnt);
void printList();
int get_Element(int index_of_element);
void insertElement(int value, int bound);
struct node* begning(int value);


int main()
{

	
	int n = 5;

	creatLinkList(n);
	printList(); 
	head=begning( 95858);
	printList();
	insertElement( 900,n);	
	deletAllElement(33);     //calling function that will delete all node with the matching data field as inputt
	

}
