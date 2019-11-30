#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct ST_stackInfo
{
    int data;
} ST_stackInfo;
ST_stackInfo stack;
ST_stackInfo *sp;
ST_stackInfo *top;

extern void createStack(ST_stackInfo *info, int size);
extern void push(ST_stackInfo *info, int data);
extern void pop(ST_stackInfo *info, int* data);
extern int stack_is_empty(ST_stackInfo *info);
unsigned char checkForBalancedParantheses(char* expression);



#endif // STACK_H_INCLUDED
