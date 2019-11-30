#include "stack.h"
#include "queue.h"
#include "check_parentheses.h"
#include "evaluate.h"

/************************************************************
*                       AGILE_REQ4:
       Expression Evaluation using a stack and queue.
/************************************************************/
int evaluate(char* expression)
{
    /******************[Variable Declaration]**********************
    *   size   : size of queue of numbers to get evaluate
    *   out    :  output of dequeue
        first  : first elemnt to execute of operation in queue
        second : second  elemnt to execute of operation in queue
        operat : operation of elemnts to execution
    *************************************************************/
    char size=0;
    char out;
    int  first;
    int result=0;
    int second;
    char operat;
    while(*expression)
    {
        /****************** check for number from 0 to 9 ******************/
        if(*expression >= '0' && *expression <= '9' )
        {
            enqueue(&queue,*expression);
            size++;
        }
        /***************** check for operators **************************/

        else if(*expression == '+' || *expression == '-' || *expression == '*' || *expression == '/' )
        {
            enqueue(&queue,*expression);
            size++;
        }
        expression++;
    }
    int counter=0;

    /*******************looping on queue to get value *******************/
    for(int i=0; i<size; i++)
    {
        dequeue(&queue,&out);
        counter++;
        if(counter==1)
        {
            /***********get first element **************/
            first=out-'0';
        }
        else if(counter==2)
        {
            /*************get operator *****************/
            operat=out;
        }
        else if(counter==3)
        {
            /****************get second element *********/
            /**** get result in firist again **********/
            second=out-'0';
            result=calculate(first,operat,second);
            first=result;
            counter=1;
        }

    }
    printf("THE OUTPUT : = %d\n",result);
    return result;
}


/************************************************************
*                  function to calculate :
/************************************************************/

int calculate (int first, char operation, int second)
{
    switch(operation)
    {
    case '+' : return first + second;
    case '-' : return first - second;
    case '*' : return first * second ;
    case '/' : return first / second;
    default  : printf("ERROR Parameter !\n");
    }
}

