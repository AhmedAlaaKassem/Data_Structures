#include "stack.h"
#include "check_parentheses.h"

/************************************************************
                Function Implementation
/************************************************************/
unsigned char checkForBalancedParantheses(char* expression)
{
    /******** Initial Stack with initial size 50 **************/
    createStack(&stack,50);
     /************* variable for pop values *****************/
    char out;

    /*****************Looping of expression ****************/
    /*****************to get ( [ { *************************/
    while(*expression)
    {
        if( (*expression == '(') || (*expression == '{') || (*expression == '['))
        {
            /************push all ( [ { in stack *****************/
            push(&stack,*expression);
        }
            /************* check if close parentheses ************/
        if ( (*expression == ')') || (*expression == '}') || (*expression == ']'))
        {
            if(stack_is_empty(&stack))
            {
                printf("NOT Balanced\n");
                return 0;
            }

            pop(&stack,&out);
            /************* Case for ) *************/
            if(*expression == ')')
            {
                if(out != '(')
                {
                    printf("NOT Balanced\n");
                    return 0;
                }
            }
            /************* Case for ] *************/
            else if(*expression == ']')
            {
                if(out != '[')
                {
                    printf("NOT Balanced\n");
                    return 0;
                }
            }
            /************* Case for } *************/
            else if (*expression == '}')
            {
                if(out != '{')
                {
                    printf("NOT Balanced\n");
                    return 0;
                }
            }
        }
        expression++;
    }
    /******************* Return true parentheses  ***************/
    if(stack_is_empty(&stack))
    {
        printf("Balanced\n");
        return 1;
    }
    /******************* Return false parentheses  ***************/
    else
    {
        printf("NOT Balanced\n");
        return 0;
    }


}
