#include <stdio.h>
#include <stdlib.h>



struct node {

	int data;
	struct node* next;
};

struct node* begning(struct node* head, int value);

void insertElement(struct node* head, int value, int inserting_index);

void ending(struct node* head, int value);

int get_Element(struct node* head, int index_of_element);



int main() {


	int i, value;

	int n = 4;

	struct node* head;
	struct node* q;
	struct node* p;


	printf("Enter the  value that will be assigned to the HEAD node:-  ");

	scanf_s("%d", &value);


	q = (struct node*)malloc(sizeof(struct node));

	q->data = value;

	q->next = NULL;

	head = q;
	p = head;

	for (i = 1; i < n; i++) {

		printf("Enter the  value of the values that will be assigned to the following nodes");
		scanf_s("%d\N", &value);

		q = (struct node*)malloc(sizeof(struct node));
		q->data = value;
		q->next = NULL;

		p->next = q;     //link the previous node with the current one 

		p = p->next;    //this will let the pointer jump  to the current 

	}
	p = head;
	while (p != NULL)
	{

		printf("\t %d", p->data);
		p = p->next;

	}

	    /////////////////////////////////////////////////////////////////////////////////////////////////////
       ////                  get function											    				////
       ///////////////////////////////////////////////////////////////////////////////////////////////////

	int searching_index;
	int loop_tial = 0;
		  do
		   {
			  
				  
			printf("\nEnter the index of the element: ");
			scanf_s("%d", &searching_index);
		
				
			if (searching_index > n ) {
				printf("the input index is out of bound, please input an intiger value that is less than %d \n", n);
			}
			else if (searching_index < 0 ) {

			  printf("the searhing index should not be negative please enter an intiger value tha is less than   %d \n", n);
			}
			else if( searching_index<=n) {
				printf("\nElement at index %d is : ", searching_index);
				printf("%d\n", get_Element(head, searching_index));    // calling function for getting element by index
				break;	
			}
			else {
				printf("\n unknown input  please input an intiger value that is less than %d \n", n);
			}
			if(loop_tial<=3)
			printf("\n  (^) (^) you have reached 3 unsuccessful trials \n");
			
			loop_tial++;
		} while (loop_tial < 3);
		
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////
	////                insert function											    				////
	///////////////////////////////////////////////////////////////////////////////////////////////////


	int input_index;
	int input_value;
	int trial_loop=0;
	  while (trial_loop < 3) {
		do {
			printf("\nEnter the index to insert the  element: ");
			scanf_s("%d", &input_index);
			printf("\nEnter the element to be insrted at %d position: ", input_index);
			scanf_s("%d", &input_value);
			if (input_index >= n && input_index < 0) {
				
				printf("\n the input index must be less than %d \n ",n);
			}else{
			
				printf("new element is added at the index %d \n", input_index);
				insertElement(head, input_value, input_index,n);   // calling function for insertng new element 
				p = head;
				while (p != NULL)
				{

					printf("\n %d\n", p->data);
					p = p->next;

				}
				break;
			}

			trial_loop++;
		} while (loop_tial < 3);
		if (input_index < n) 
			break;
		
	  }

	  /////////////////////////////////////////////////////////////////////////////////////////////////////
      ////        Inset at the end and begning of the node function				       		    				////
      ///////////////////////////////////////////////////////////////////////////////////////////////////
	  int element;
	
	  int key_Word;
	    printf("\ninput the key word as eithir '1' to input at the end and '2'to input at the bigning: ");
		scanf_s("%d", &key_Word);
	    	     
		 if (key_Word ==1) {
			 printf("input the value of the element to be inserted: ");
			
			 scanf_s("%d", &element);
			 ending(head, element);
			 p = head;
			 while (p != NULL)
			 {


				 printf("\n %d\n", p->data);
				 p = p->next;

			 }
			 printf("new element is added at the end\n");
		 }else if(key_Word==2){
			 printf("input the value of the element to be inserted :");
			
			 scanf_s("%d", &element);
				

		head = begning(head, element);

		p = head;
		while (p != NULL)
		{

			printf("\n %d\n", p->data);
			p = p->next;

		}
		printf("\nnew element is added at the begning\n");

		 }
		 else {

			 printf("unkown character!\n");
		 }
		return 0;



	}
