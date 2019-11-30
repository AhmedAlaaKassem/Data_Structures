#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>

/************************************************************
*                       AGILE_REQ5:
Implement the following APIs for a simple linear Linked List
that stores integer values..Use the following prototypes:
/************************************************************/

typedef struct ST_node ST_node;
struct ST_node
{
    int data;
    ST_node* next;
};

extern void deleteFromList(unsigned char position, int* data);
extern void insertToList(unsigned char position, int data);
extern void searchIntoList(int data);
extern void printlist();
extern void createList();
extern void sortList();
void reverseList();


#endif // LINKEDLIST_H_INCLUDED
