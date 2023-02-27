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
	char password[10];

	srand((unsigned int)time(NULL));
	
	for (i = 1; i < 10; i++)
	{
		num = rand() % 128;
		if (num > 47 && num < 58)
		{
			password[i] = num + '0';
		}
		else
			i--;
	}
	password[10] = '\0';

	return (0);
}
