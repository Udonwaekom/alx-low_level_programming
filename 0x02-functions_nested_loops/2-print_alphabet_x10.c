#include <main.h>

/**
 * main - prints lphabets 10x
 * Return: 0
 */
void print_alphabet_x10(void);
{
char (ch);
char (bn);
ch = '0';

while (ch <= 10)
{
bn = 'a';
while (bn <= 'z')
{
_putchar(bn);
bn++
}
_putchar('\n');
ch++;
}

return (0);
}
