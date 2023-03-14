#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: pointer to string.
 *
 * Return:
 *  - pointer to an array of strings (words), or NULL if fails.
 *  - NULL if str == NULL or str == "".
 */
char **strtow(char *str)
{
	char **ret;
	int *count;
	int i, j = 1, n = 0, c = -1;

	if (str == NULL || *str == "")
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (j == 1 && str[i] == 32)
			n++; j = 0;
		else if (str[i] != 32)
			j = 1, count[n] += 1;
	}
	ret = malloc(sizeof(ret) * n);
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		if (j != 0)
		{
			c++;
			ret[c] = malloc(sizeof(char) * (count[c] + 1));
			if (ret[c] == NULL)
			{
				free_grid(ret, n + 1);
				return (ret);
			}
		}
		for (j = 0; str[i]; j++)
		{
			if (str[i] == " ")
				break;
			ret[c][j] = str[i];
		}
		if (j != 0)
			ret[c][j] = '\0';
	}
	ret[c + 1][0] = '\0';
	return(ret);
}
