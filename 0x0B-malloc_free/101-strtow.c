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
	int count[] = {0};
	int i = 0, j = 0, n = 0, c = 1;

	if (str == NULL || *str == 0)
		return (NULL);
	while (str[i])
	{
		for (; str[i] == 32; i++)
			;
		for (; str[i] != 32 && str[j]; i++)
			c++;
		count[n] = c;
		n++;
	}
	ret = malloc(sizeof(char *) * n);
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	c = 0;
	while (str[j])
	{
		ret[c] = malloc(sizeof(char) * count[c]);
		if (ret[c] == NULL)
		{
			for (i = 0; i <= c; i++)
				free(ret[i]);
			free(ret);
			return (NULL);
		}
		for (; str[j] == 32; j++)
			;
		for (i = 0; str[j] != 32 && str[j]; j++, i++)
			ret[c][i] = str[j];
		ret[c][i] = '\0';
		c++;
	}
	return (ret);
}
