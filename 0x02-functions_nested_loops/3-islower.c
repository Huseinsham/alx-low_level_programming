#include "main.h"

 /**
 * _islower - Check Holberton
 * 
 * Description: function uses _putchar function to print
 * 
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
