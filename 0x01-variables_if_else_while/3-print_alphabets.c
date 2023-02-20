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
	for (bb = 'A'; bb <= 'Z'; bb++)
		putchar (bb);
	putchar ('\n');
	return (0);
}
