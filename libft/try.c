#include "./include/libft.h"
#include <stdio.h>
#include <string.h>
int ft_strncmp(char *s1, char *s2, size_t n);

int main()
{
	int i = ft_strncmp("Hello.", "Hallo.",1);
	printf("%d", i);
	return 0;
}

