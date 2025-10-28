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
        return OVERFLOW;
        
    }else 
    {
        stack[currentStack] = zahl;
        currentStack++;
        return SUCCESS;
    
    }

    

}

/**
    popt die letzte zahl in der stack
*/
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

/**
    popt alles in stack

*/
int printTop(void)
{


}

int printAll(void)
{


}



/**
    vertauscht die position oberste zwei zahlen im stack
*/
int swap(void)
{

}

/**
    kopiert oberste zahl im stack und tut sie im nächsten stack zelle
*/
int doppeln(void)
{

}

/**
    löscht alles im stack
*/
int deleteAll(void)
{
    currentStack = 0 ;
    return SUCCESS;
}

/**
    fragt ob stack leer ist
*/
bool isEmpty(void)
{
   return currentStack == 0;
}


/**
   fragt ob stack voll ist
*/
bool isFull(void)
{
    return currentStack == MAX_SIZE_STACK;
}

/**
   gibt zurück wo der Pointer gerade steht.
*/
int getCurrentStack(void)
{
    return currentStack;
}