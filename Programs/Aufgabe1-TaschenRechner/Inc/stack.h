/**
  * @file   stack.c
  * @author Mohammad Wasim Attal, HAW Hamburg 
  * @date   Oktober.21
  * @brief  This modules implements a simple Stack with array of 10 
            and we have several function to manipulate the Stack
  */



#ifndef STACK_H
#define STACK_H
#include <stdbool.h>
#define MAX_SIZE_STACK 100



/**
    pusht einen Zahl in den Stack
*/
int push(int zahl);

/**
    popt die letzte zahl in der stack
*/
int pop(void);

/**
    popt alles in stack

*/
int popAlles(void);

/**
    löscht alles im stack
*/
int loeschen(void);

/**
    vertauscht die position oberste zwei zahlen im stack
*/
int drehen(void);

/**
    kopiert oberste zahl im stack und tut sie im nächsten stack zelle
*/
int doppeln(void);

/**
    fragt ob stack leer ist
*/
bool isEmpty(void);


/**
   fragt ob stack voll ist
*/
bool isFull(void);



#endif /* STACK_H */
// EOF