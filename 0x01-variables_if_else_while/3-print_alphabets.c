#include <stdio.h>

/**
 * main - prints lower and then uppercase
 * Return: 0
 */
int main(void)
{
	char bb;

	for (bb = 'a'; bb <= 'z'; bb++)
		putchar (bb);
	for (cc = 'A'; cc <= 'Z'; cc++)
		putchar (cc);
	putchar ('\n');
	return (0);
}
