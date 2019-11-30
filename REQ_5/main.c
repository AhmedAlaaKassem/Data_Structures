#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

extern int linkedlist_size;

int main()
{
    int out;
    createList();
    insertToList(0, 90);
    printlist();
    printf("\n");

    insertToList(1, 99);
    printlist();
    printf("\n");

    insertToList(2, 1007);
    printlist();
    printf("\n");

    reverseList();
    printlist();
    printf("\n");

}





