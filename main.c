#include <stdio.h>
#include "print_layout.h"
#include <strings.h>

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	char	*res;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	i = 0;
	a = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *)malloc(a * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}

void	set_layout(unsigned int fg, unsigned int bg, unsigned int style);

void	ft_putchar_a(char c)
{
	write(1, &c, 1);
}

void	delete_std(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar_a('\b');
		i++;
	}
}

int main()
{
	printf("Hello");
	delete_std(3);
	return (0);
}
