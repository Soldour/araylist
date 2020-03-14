#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 

 struct node
{
    int data;
    struct node* next;

} *head;


void creatLinkList(int n)
{
    struct node* current, * temp;
    int value, i;

    head = malloc(sizeof(struct node));

    printf("Enter data of node 1: ");
    scanf_s("%d", &value);

    head->data = value; // Link data field with data
    head->next = NULL; // Link address field to NULL

    temp = head;

    for (i = 2; i <= n; i++)
    {
        current = malloc(sizeof(struct node));

    

        printf("Enter data of node %d: ", i);
        scanf_s("%d", &value);

        current->data = value; // Link data field of newNode
        current->next = NULL; // The newNode should point to nothing

        temp->next = current; // Link previous node i.e. temp to the newNode
        temp = temp->next;
    }

}

_Bool get_Element_ByValue(int elemnt)
{


    struct node * node_of_index = head;  // create a new node and set it to the head node 

    int count = 0;

    _Bool exist;

    while (node_of_index != NULL)    // the count variale will control the looping 
    {

        exist = node_of_index->data == elemnt;

        if (exist)
            printf("\nthe element %d is deleted from index %d\n", elemnt, count);

        node_of_index = node_of_index->next;

        count++;

    }return true;

    return false;
}

void deletAllElement(int  key)
{

    struct node * current, * follow;

    int count = 0;

    while (head != NULL && head->data == key)
    {
        follow = head;
        head = head->next;
        free(follow);
        count++;
    }

    follow = NULL;
    current = head;
    bool  exist;

    while (current != NULL)
    {

        exist = current->data == key;

        if (exist)

        {

            if (exit)
            {
                count++;
            }
            if (follow != NULL) {

                follow->next = current->next;
            }


            free(current);
            current = follow->next;

            printf("\n the node at index %d\n", count);

        }
        else
        {

            follow = current;
            current = current->next;


        }
    }

}

void deletElemntByIndex(int index)
{
    struct node* indexing_Node = head;

    int count = 2;

    while (count <= index)
    {
        indexing_Node = indexing_Node->next;
        count++;

    }
    indexing_Node->next = indexing_Node->next->next;
    printf("\nThe element at index %d is deleted\n", index);

}

void print()
{
    struct node* current;

    current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);     // print the data field of the struct 
        current = current->next;  //jump the current node to the next         
    }
    printf("\n");
}
