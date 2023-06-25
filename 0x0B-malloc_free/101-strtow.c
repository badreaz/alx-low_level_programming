#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	char **ret, *ptr;
	int i, j, flag = 1;
	/*int count[50];
	int i = 0, j = 0, n = 0, c = 1;*/

	if (str == NULL || *str == 0)
		return (NULL);
	/*while (str[i] != '\0')
	{
		for (; str[i] == 32; i++)
		for (; str[i] != 32 && str[i]; i++)
			c++;
		count[n] = c;
		n++;
	}*/
	/*ret = malloc(sizeof(char *) * n);
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}*/
	/*c = 0;
	while (str[j] != '\0')
	{
		ret[c] = malloc(sizeof(char) * count[c]);
		if (ret[c] == NULL)
		{
			for (i = 0; i <= c; i++)
				free(ret[i]);
			free(ret);
			return (NULL);
		}
		for (; str[j]; j++)
		{
			if (str[j] != 32)
				break;
		}
		for (i = 0; str[j] != 32 && str[j]; j++, i++)
			ret[c][i] = str[j];
		ret[c][i] = '\0';
		c++;
	}*/
	/*while (str[j] != '\0')
	{
		if (str[j] == 32)
		{
			for (; str[j] == 32; j++)
				;
		}
		ret[c] = malloc(sizeof(char) * count[c]);
		if (ret[c] == NULL)
		{
			for (i = 0; i <= c; i++)
				free(ret[i]);
			free(ret);
			return (NULL);
		}
		for (i = 0; str[j] != 32 && str[j]; j++, i++)
			ret[c][i] = str[j];
		ret[c][i] = '\0';
		c++;
	}
	ret[c] = NULL;*/
	for (i = j = 0; str[i]; i++)
	{
		if (str[i] == 32)
		{
			printf("hi");
			flag = 1;
		}
		else if (flag)
		{
			printf("hello");
			flag = 0;
			j++;
		}
	}
	ret = malloc(sizeof(char *) * j);
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	for (i = j = 0; str[i]; i++)
	{
		if (str[i] == 32)
		{
			str[i] = '\0';
			flag = 1;
		}
		else if (flag)
		{
			ret[j] = &str[i];
			flag = 0;
			j++;
		}
	}

	for (i = 0; str; i++)
	{
		ptr = str;
		ptr = _strpbrk(ptr, " ");
		if (ptr != NULL)
		{
			ptr = '\0';
			ret[i] = ptr + 1;
		}
		str++;
	}
	return (ret);
}
