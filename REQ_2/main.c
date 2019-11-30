#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "check_parentheses.h"

/************************************************************
*                       AGILE_REQ2:
Check for balanced parentheses in an expression using a stack
/************************************************************/

int main()
{
    while(1)
    {
        char str[20];
        printf("Please enter parentheses in an expression STR :");
        gets(str);
        checkForBalancedParantheses(str);
    }
}



