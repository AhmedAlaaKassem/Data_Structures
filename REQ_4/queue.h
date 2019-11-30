#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct ST_queueInfo
{
    int data;
} ST_queueInfo;
ST_queueInfo queue;
ST_queueInfo *head;
ST_queueInfo *first;
ST_queueInfo *last;


extern void createQueue(ST_queueInfo* info, int maxSize);
extern void enqueue(ST_queueInfo *info, int data);
extern void dequeue(ST_queueInfo *info, int* data);


#endif // QUEUE_H_INCLUDED
