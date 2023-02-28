#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random passwords.
 *
 * Return: 0
 */
int main(void)
{
	int i, num;
	int total = 0;
	int password[100];

	srand(time(NULL));
	
	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		total += password[i] + '0';
		putchar(password[i] + '0');

		if ((2772 - total) - '0'  < 78)
		{
			num = 2772 - total - '0';
			total += num;
			putchar(num + '0');
			break;
		}
	}

	return (0);
}
