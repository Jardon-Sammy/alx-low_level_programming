#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * folloed by a new line, expect q and e
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
