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
	int count[];
	int i = 0, j = 0, n = 0, c = 1, num;

	if (str == NULL || *str == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		for (; str[i] == 32; i++)
			;
		for (; str[i] != 32 && str[j]; i++)
			c++;
		count[n] = c;
		n++;
	}
	ret = malloc(sizeof(void *) * n);
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	c = 0;
	while (str[j] != '\0')
	{
		num = count[c];
		ret[c] = malloc(sizeof(char) * num);
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
	ret[c] = NULL;
	return (ret);
}
