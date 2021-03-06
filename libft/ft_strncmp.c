#include <string.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (((s1[i] == '\0') || (s2[i] == '\0')) && n > 0)
	{
		return (s1[i] - s2[i]);

	}
	while (s1[i] && s2[i] && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
