#include "main.h"
/**
 * main - Determine if a number is positive, negetive or zero
 * 0 : is the number to be checked
 * Return: 0 on Success
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negatives");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return;
}
