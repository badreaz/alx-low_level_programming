
/**
 * _isalpha - check if c is alphabet.
 *
 * Return: 1 if c is alphabet otherwise 0.
 */
int _islpha(int c)
{
	if (64 < c && c < 123)
	{
		if (90 < c && c < 97)
		{
			return (0);
		}
		return (1);
	}
	return (0);
}
