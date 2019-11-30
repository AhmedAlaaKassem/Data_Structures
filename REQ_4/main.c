#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "queue.h"



int main()
{
    createQueue(&queue,50);
    while(1)
    {
        int flag=0;
        int value;
        char str[20];
        printf("Please enter parentheses in an expression STR :");
        gets(str);
        checkForBalancedParantheses(str);
        evaluate(str);
    }

}

