#include "stack.h"

/************************************************************
*                       AGILE_REQ1:
Implement a dynamically allocated stack that stores integers.
Use the following prototypes:                               */
/************************************************************/


/******************[Variable Declaration]**********************
 *   variable stack size
 *   sp stack_pointer  top pointer_to_top_of_stack
 *************************************************************/
int stack_size=0;
ST_stackInfo stack;
ST_stackInfo *sp;
ST_stackInfo *top;

/******************[Create Stack]*****************************
 *   Initial Top pointer to stack
 *   Initial stack pointer to stack
 *************************************************************/
void createStack(ST_stackInfo *info, int size)
{
    info = (ST_stackInfo*) malloc(size * sizeof(ST_stackInfo));
    sp  =info;
    top =info;
    stack_size = size;
}
/*************************[push]******************************
 *   PUSH elements to stack and check if stack full
 *************************************************************/
void push(ST_stackInfo *info, int data)
{
    if((sp-top)== stack_size)
    {
        printf("stack is full\n");
    }
    else
    {
        sp->data = data;
        sp++;
    }
}
/*************************[POP]******************************
 *   POP elements to stack and check if stack full
 *************************************************************/
void pop(ST_stackInfo *info, int* data)
{
    if((sp-top)== 0)
    {
        printf("stack empty \n");
    }
    else
    {
        sp--;
        *data=sp->data;
    }
}
/****************************[stack_is_empty]*********************************
 *   To check if stack is empty or not
 *   return 1 -> empty ********** return 0 -> full
 *****************************************************************************/
int stack_is_empty(ST_stackInfo *info)
{
    if((sp-top)== 0)
        return 1;

    else
        return 0;
}
