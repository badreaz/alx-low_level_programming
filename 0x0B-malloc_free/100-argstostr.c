#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments.
 * @ac: number of arguments.
 * @av: pointer to argument.
 *
 * Return:
 *  - NULL if ac == 0 or av == NULL
 *  - pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, n = 1;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}
	str = malloc(sizeof(char) * n);
	if (str == NULL)
	{
		return (NULL);
	}
	n = -1;
	for (i = 0; i < ac; i++)
	{
		n++;
		for (j = 0; av[i][j]; j++)
		{
			str[n] = av[i][j];
			n++;
		}
		str[n] = '\n';
	}
	return (str);
}
