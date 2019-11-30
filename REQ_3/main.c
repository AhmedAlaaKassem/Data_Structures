#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    int data;
    createQueue(&queue,4);

    enqueue(&queue,3);
    enqueue(&queue,55);
    enqueue(&queue,999);
    enqueue(&queue,17);


    dequeue(&queue,&data);
    dequeue(&queue,&data);
    dequeue(&queue,&data);
    dequeue(&queue,&data);


    enqueue(&queue,1);
    enqueue(&queue,2);

    dequeue(&queue,&data);
    dequeue(&queue,&data);


}




