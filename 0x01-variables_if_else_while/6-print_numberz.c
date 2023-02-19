#include <stdio.h>
/* Betty doc style */
/**
 * main - print base 10 using putchar
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}

