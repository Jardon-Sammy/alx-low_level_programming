#include <stdio.h>
/**
 * main-prints the alphabet in lowercase
 * followed by a new line
 * Return: always 0 (success) 
 */
int main(void)
{
	char ch;

	or (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
