/**
  * @file   stack.c
  * @author Mohammad Wasim Attal, HAW Hamburg 
  * @date   Oktober.21
  * @brief  This modules implements a simple Stack with array of 100
            and we have several function to manipulate the Stack
  */

#include "stack.h"
#include "error_handling.h"
#include "display.h"
  

static int stack[MAX_SIZE_STACK];   // array mit 100 plätze
static int currentStack = 0;   // *Pointer*
  
 
int push(int zahl)
{
    if(isFull())
    {
        return OUT_OF_RANGE;
        
    }else 
    {
        stack[currentStack] = zahl;
        currentStack++;
        return SUCCESS;
    }
}


int pop(int *val)
{
    if(isEmpty())
    {
        return UNDERFLOW;

    }else 
    {
        --currentStack;
        *val = stack[currentStack];
        return SUCCESS; 
    }
}


int printTop(void)
{
    if (isEmpty()) 
    {
        return UNDERFLOW;

    }else 
    {
        int stackTop = 0;
        peek(& stackTop, getCurrentStack() - 1);
        printNr(stackTop);
        return SUCCESS;
    

    }


}


int printAll(void)
{
    if (isEmpty()) {
        return UNDERFLOW;
    
    }else {
        for (int i = 0; i < getCurrentStack(); i++) {
            int value2 = 0;
            peek(&value2, getCurrentStack() - i);
            printNr(value2);
            return SUCCESS;
            
        
        }
    
    }


}


int swap(void)
{
    if (currentStack< 2) {
        return NOT_ENOUGH_OPERANDS;
    }else {
        int z1 = 0;
        int z2 = 0;
        pop(&z1);
        pop(&z2);
        push(z1);
        push(z2);
        return SUCCESS;
    }
}


int doppeln(void)
{
    if(isEmpty())
    {
        return UNDERFLOW;
    }else {
    int value = 0;
    peek(&value, getCurrentStack()-1);
    push(value);
    return SUCCESS;
    }
}


int deleteAll(void)
{
    currentStack = 0 ;
    return SUCCESS;
}


bool isEmpty(void)
{
   return currentStack == 0;
}


bool isFull(void)
{
    return currentStack == MAX_SIZE_STACK;
}


int getCurrentStack(void)
{
    return currentStack;
}


int peek(int *val, int index)
{
    if(isEmpty())
    {
        return UNDERFLOW;
    }
    if (index < currentStack) {
        *val = stack[index];
        return SUCCESS;
    } 
}