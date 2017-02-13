void	colle00(int r, int c)
{
	char tab[c][r];
	int i;
	int j;

	i = 0;
	j = 0;
	tab[i][j] = 'o';
	tab[i][c] = 'o';
	tab[r][j] = 'o';
	tab[r][c] = 'o';
	while (i < r)
	{
		while (j < c)
		{
			tab[j][c] = '-';
			++j;
		}
		tab[i][r] = '-';
		++i;
	}
}
