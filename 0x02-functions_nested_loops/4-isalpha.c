
/**
 * _isalpha - check if c is alphabet.
 *
 * Return: 1 if c is alphabet otherwise 0.
 */
int _islpha(int c)
{
	if (64 < c < 123)
	{
		if (90 < c < 97)
		{
			return(0);
		}
		return(1);
	}
	return(0);
}
