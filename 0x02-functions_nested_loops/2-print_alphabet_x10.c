
/**
 * print_alphabet_x10 - print alphabet 10 times.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alpha = 'a';

	while(i < 10)
	{
		while(alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
	return(0);
}
