#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the
 *   main function is executed.
 */
void hare(void)
{
	printf("ma failing gtto push to git hub! and yet, it is a must to push,\n"
	"am bored!\n");
}
