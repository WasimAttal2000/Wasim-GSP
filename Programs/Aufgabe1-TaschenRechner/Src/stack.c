/**
  * @file   stack.c
  * @author Mohammad Wasim Attal, HAW Hamburg 
  * @date   Oktober.21
  * @brief  This modules implements a simple Stack with array of 10 
            and we have several function to manipulate the Stack
  */

  #include "stack.h"
  #include "error_handling.h"
  

  // array mit 100 plätze
  static int stack[MAX_SIZE_STACK];

  // array zähler
  static int currentStack = 0;

 



  /**
    pusht einen Zahl in den Stack
*/
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
int pop(int *value)
{
    if(isEmpty())
    {
        return UNDERFLOW;
    }

}

/**
    popt alles in stack

*/
int popAlles(void)
{

}

/**
    löscht alles im stack
*/
int loeschen(void)
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
    fragt ob stack leer ist
*/
bool isEmpty(void)
{

}


/**
   fragt ob stack voll ist
*/
bool isFull(void)
{

}

