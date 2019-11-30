#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

/************************************************************
*                       AGILE_REQ3:
Implement a dynamically allocated queue that stores integers.
Use the following prototypes:
/************************************************************/

typedef struct ST_queueInfo
{
    int data;
} ST_queueInfo;
ST_queueInfo queue;

extern void createQueue(ST_queueInfo* info, int maxSize);
extern void enqueue(ST_queueInfo *info, int data);
extern void dequeue(ST_queueInfo *info, int* data);

#endif // QUEUE_H_INCLUDED
