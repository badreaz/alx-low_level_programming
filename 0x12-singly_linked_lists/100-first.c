#include "lists.h"

/**
 * before_main - print text before main.
 */
void __attribute__ ((__constructor__)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
