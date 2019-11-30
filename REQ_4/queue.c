#include "queue.h"

/************************************************************
*                       AGILE_REQ3:
Implement a dynamically allocated queue that stores integers.
Use the following prototypes:

Queue usage : if Last pointer reach last size of queue
    Then the queue is FULL.
    NOTE : don't enqueue data then dequeue again to avoid
     the leak of size of queue
/************************************************************/

/******************[Variable Declaration]**********************
 *   variable Queue size
 *   Head First & Last pointers for start end of queue
 *************************************************************/
int queue_size=0;
ST_queueInfo *head;
ST_queueInfo *first;
ST_queueInfo *last;

/******************[Create Queue]*****************************
 *   Initial Head pointer to Queue
 *   Initial First & Last pointer of Queue
 *************************************************************/
void createQueue(ST_queueInfo* info, int maxSize)
{
    info = (ST_queueInfo*) malloc(maxSize * sizeof(ST_queueInfo));
    head   = info;
    first  = info;
    last   = info;
    queue_size = maxSize;
}

/************************[ Enqueue ]***************************
 *   PUSH elements to stack and check if stack full
 *************************************************************/
void enqueue(ST_queueInfo *info, int data)
{
    if(((last-first)== queue_size) || (last-first ==-1)    )
    {
        printf("Queue if full\n");
        return;
    }
    if(last-head==queue_size)
        last=head;

    last->data=data;
    last++;
}

/************************[ Dequeue ]***************************
 *   PUSH elements to stack and check if stack full
 *************************************************************/
void dequeue(ST_queueInfo *info, int* data)
{
    if(((last-first)== 0)  )
    {
        printf("queue empty \n");
        last=head;
        first=head;
        return;
    }
    else
    {
        if(first -head == queue_size )
            first = head;

        *data=first->data;

        /* print data for testing */
        /*
        printf("your_data is : %c \n", first->data);

        */
        first++;
    }
}
