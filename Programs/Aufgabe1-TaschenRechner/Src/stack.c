/**
  * @file   stack.c
  * @author Mohammad Wasim Attal, HAW Hamburg 
  * @date   Oktober.21
  * @brief  This modules implements a simple Stack with array of 10 
            and we have several function to manipulate the Stack
  */

  #include "stack.h"
  #include "error_handling.h"
  #include "display.h"
  

  static int stack[MAX_SIZE_STACK];   // array mit 100 plätze
  static int currentStack = 0;   // *Pointer*
  static int laenge = sizeof(stack) / sizeof(stack[0]);

 
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
int popAlles(void)
{
    for(int i = 0; i< getCurrentStack(); i++)
    {
        char zeichen = '0' + stack[i];
        printStdout();
    }



}

/**
    löscht alles im stack
*/
int loeschen(void)
{
    currentStack = 0 ;
    return SUCCESS;
    

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
    fragt ob stack leer ist
*/
bool isEmpty(void)
{
    if (currentStack == 0)
    {
        return true;
    }

}


/**
   fragt ob stack voll ist
*/
bool isFull(void)
{
    
    if(currentStack > 99 )
    {
        return true;
    }

}
int getCurrentStack()
{
    return currentStack;
}