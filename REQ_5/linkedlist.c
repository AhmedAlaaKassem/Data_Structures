#include "linkedlist.h"

int linkedlist_size=0;

ST_node*listHead;

/************************************************************
*                       AGILE_REQ5:
Implement the following APIs for a simple linear Linked List
that stores integer values..Use the following prototypes:
/************************************************************/

/**********************[Create List]**************************
 *   Note there is only one stack to use
 *************************************************************/
void createList()
{
    listHead=NULL;
}


/**********************[Insert_List]**************************
 *   Note there is only one stack to use
  NOTE : to insert in 0 enter 0 position (first element)
 *************************************************************/
void insertToList(  unsigned char position, int data)
{
    int counter;
    ST_node* ptr = (ST_node*) malloc(sizeof(ST_node));
    ST_node* dummy = listHead;
    ptr->data=data;
    /************* check if list point to null ******************/
    if(listHead == NULL)
    {
        listHead=ptr;
        ptr->next=NULL;
        linkedlist_size++;
    }
    else
    {
        /**************** find position to insert ***********/
        if(position <= linkedlist_size)
        {
            /******** insert in first elemnt ****************/
            if(position==0)
            {
                ptr->next = dummy;
                listHead=ptr;
                linkedlist_size++;
            }
            else
            {
                /********** find position to insert **************/
                for(counter=0; counter<position-1; counter++)
                {
                    dummy=dummy->next;
                }

                ptr->next = dummy->next;
                dummy->next = ptr;
                linkedlist_size++;
            }
        }
        else
        {
            /******************* invaled position ****************/
            printf("invaled position\n");
        }
    }

}


/**********************[print list]**************************
 *   to print whole linked list
 *************************************************************/
void printlist()
{
    if(linkedlist_size!=0)
    {
        ST_node* dummy = listHead;
        while(dummy->next != NULL)
        {
            printf("%d ",dummy->data);
            dummy = dummy->next;
        }
        printf("%d ",dummy->data);
    }
    else
    {
        printf("list is empty\n");
    }
}


/**********************[deleteFromList]**************************
Note : to delete first element enter 0
      : 1 to delete second element ... so on.
 *************************************************************/
void deleteFromList( unsigned char position, int* data)
{
    ST_node* dummy = listHead;

    if(listHead==NULL)
    {
        /*********** linked list empty **************/
    }
    else
    {
        if(position < linkedlist_size)
        {
            if(position==0)
            {
                *data=listHead->data;
                listHead=listHead->next;
                linkedlist_size--;
            }

            else
            {
                for(int i=0; i<position-1; i++)
                {
                    dummy=dummy->next;
                }
                *data=dummy->next->data;
                dummy->next=dummy->next->next;
                linkedlist_size--;
            }
        }
        else
        {
            printf("invaled position\n");

        }

    }
}


/**********************[searchIntoList]**************************
    search for element by its value.
 *************************************************************/
void searchIntoList( int data)
{
    int index=0;
    if(linkedlist_size!=0)
    {
        ST_node* dummy = listHead;
        if(dummy->data == data)
        {
            printf("Data found in place : %d",index);
        }
        while(dummy->next != NULL)
        {
            index++;
            dummy = dummy->next;
            if(dummy->data == data)
            {
                printf("Data found in place : %d",index);
            }
        }
    }
    else
    {
        printf("List is EMPTY : Element not found \n");
    }
}


/**********************[reverseList]**************************
    reverse linked list.
 *************************************************************/
void reverseList(){

    ST_node* nex = NULL;
    ST_node* pre = NULL;
    ST_node* current = listHead;

    while(current != NULL)
    {
        nex=current->next;
        current->next=pre;

        pre=current;
        current=nex;
    }
    listHead=pre;
}

