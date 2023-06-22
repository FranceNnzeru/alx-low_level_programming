#include "main.h"

/**
  * isdigit - checks whether the character is a digit or not
  * @c: character to be checked
  *
  * return: 1 if its a digit else 0
  */

int _isdigit(int c)
{
	if(c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
