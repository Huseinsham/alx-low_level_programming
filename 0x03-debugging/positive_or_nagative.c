#include "main.h"

/**
 * positive_or_nagative - check for nagative or positive numbers
 *
 * @i: the number to be checked
 *
 * Retun: always 0
 */

void positive_or_nagative(int i)
{
	if (i < 0)
		printf("%d is nagative", i);
	else
		printf("%d is positive", i);
}
