#include <unistd.h>

/**
 * main - print a quote
 *
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar,", 47);
	write(1, " 2015-10-19\n", 12);
	return (1);
}
