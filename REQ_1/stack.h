#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

/************************************************************
*                       AGILE_REQ1:
Implement a dynamically allocated stack that stores integers.
Use the following prototypes:                               */
/************************************************************/

typedef struct ST_stackInfo
{
    int data;
} ST_stackInfo;

extern void createStack(ST_stackInfo *info, int size);
extern void push(ST_stackInfo *info, int data);
extern void pop(ST_stackInfo *info, int* data);
extern int stack_is_empty(ST_stackInfo *info);

#endif // STACK_H_INCLUDED
