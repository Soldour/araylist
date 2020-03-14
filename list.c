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



_Bool deletElemntByKey( int key)
{
	struct node* indexing_Node = head;

	int count = 0;
	if (indexing_Node->data == key) {
		printf("\nthe element is at the head so no can do :\n");
		return false;

	}

	else {
		while (indexing_Node->next->data != key)
		{
			indexing_Node = indexing_Node->next;
			count++;

		}
		indexing_Node->next = indexing_Node->next->next;
		printf("the value %d is deleted form the list\n", key);

	}

}






int main()
{

	

	int n = 4;

	creatLinkList(n);

	//get_Element_ByValue(22) ? printf("\nYes\n") : printf("the element is not a memeber of this list ;-( \n");

	//deletElemntByKey(head, 22);
	deletAllElement( 33);

}
