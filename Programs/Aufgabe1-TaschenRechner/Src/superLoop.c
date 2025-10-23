/**
  * @file   superLoop.c
  * @author Mohammad Wasim Attal, HAW Hamburg 
  * @date   Oktober.21
  * @brief  This modules implements a simple switch case for token input
  */

#include "superLoop.h"
#include "operation.h"
#include "stack.h"
#include "error_handling.h"

static int result = 0;

int switchInput(char input, int tokVal)
{
    switch (input) 
	{
		case 'n':
			result = push(tokVal);
			break;

			case '+':
			result = add();
			break;

			case '-':
			result = sub();
			break;

			case '/':
			result = div();
			break;

			case '*':
			result = mul();
			break;

			case 'P':
			
			break;

			case 'p':
			
			break;

			case 'c':
			result = loeschen();
			break;

			case 'r':
			result = swap();
			break;

			case 'd':
			result = doppeln();
			break;

			case ' ':
			//mul
			break;

			case 'U':
			result = UNDERFLOW;
			break;

			case 'O':
			result = OVERFLOW;
			break;



			default:
			result = UNEXPECTED_Error;
					break;
			
	}
	if(result != 0)
			{
				errorBehandlung(result);
			}


}