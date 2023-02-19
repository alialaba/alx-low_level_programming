#include <stdio.h>
/* betty doc style*/
/**
 * main - loop through alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char i;

for (i = 'a' ; i <= 'z' ; i++)
	putchar(i);
putchar('\n');
return (0);
}
