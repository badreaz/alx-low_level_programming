int rand(void)
{
	static int n = -1;

	n++;
	if (n == 0)
		return (8);
	else if (n == 1)
		return (8);
	else if (n == 2)
		return (7);
	else if (n == 3)
		return (9);
	else if (n == 4)
		return (23);
	else if (n == 5)
		return (74);
}
