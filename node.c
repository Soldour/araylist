#include <stdlib.h>

struct node {

	int data;
	struct node* next;
};
struct node* begning(struct node* head, int value)
{
	struct node* new_node;
	new_node = malloc(sizeof(struct node));
	new_node->data = value;
	new_node->next = head;
	return new_node;
}
void insertElement(struct node* head, int value, int inserting_index, int bound)
{  
	int loop = 0;
	do
	{

	
	if (inserting_index < bound && inserting_index>0) {
		struct node* new_node;                   /////////\\\\\\\\\\\\\\\\\\//////\\\\\\\\\\\\\\\\\\\\////////////////////
		struct node* track = head;              // create two same node that will track the head node ( track and follow)
		struct node* follow = head;             // new node will take the data feild of value and will pint to null  
		new_node = malloc(sizeof(struct node)); // the count will start form 2 because the starting node functionis 
		new_node->data = value;                 //different
		new_node->next = NULL;                  //
		int count = 2;

		while (count <= inserting_index)
		{
			follow = follow->next;
			track = track->next;

			count++;
		}

		new_node->next = track->next;
		follow->next = new_node;


		while (track != NULL) {
			track = track->next;
		}
	} else  {

		printf("\n the insertign index must be lessthan %d and greater than 1", bound);
		break;
	}



	loop++;
	} while (loop>3);
}



void ending(struct node* head, int value)
{
	struct node* new_node;                   // creat new node 
	struct node* track = head;               // the track node will follow the head node untill it 
	new_node = malloc(sizeof(struct node));  // reaches the point where it ponints to null
	new_node->data = value;
	new_node->next = NULL;
	while (track->next != NULL)
	{
		track = track->next;     // afther the pointer pints to null 
	}                            // it will scape fro the loop 
	track->next = new_node;      // asing the pointer where it was pointing to null previously to 
	                             //new the new node 
}



int get_Element(struct node* head, int index_of_element)
{


	struct node* node_of_index = head;  // creat a new node and set it to the head node 

	int count = 0;
	while (node_of_index != NULL)    // the count variale will control the looping 
	{
		if (count == index_of_element)         //when count becomes equal to the index where the element is 
			return(node_of_index->data);       // needed to it will retern the data(value ) that the node holds 
	
		count++;                       
		node_of_index = node_of_index->next;    // here the node_of_index will jump to the next node 
		                                        //till it reaches where the pointer points to NULL 

	}



}


//))))
//))))
///////////////////////////////////////////////////////////////////////////////////////////////////////
/////    unified function that will manipulate the node accordingly ////////////////////////////////____
/////     ////////////////////////////////////////////////////////////////////////
/////////////////         //)
/////////////oooo		   //)
//////////////  oo		    //)
//////////////	  oo	   //)
////////////////////////////)
//////////////
//////////////
//////////////

struct node* unifiedeNode_manipulation(struct node* head, int value, int inserting_index)
{







}
