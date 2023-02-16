#include <unistd.h>

/**
 * main - print a quote
 *
 * Return: 1
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar,";
	char date[] = " 2015-10-19\n";

	write(1, quote, sizeof(quote));
	write(1, date, sizeof(date));
	return (1);
}
