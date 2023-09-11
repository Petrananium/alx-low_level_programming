#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cun;

	for (cun = 0; cun <= 9; cun++)
	{
		printf("%d", cun);
	}
	putchar('\n');
	return (0);
}
