#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int d;
	int e;

	d = 21;
	e = 42;
	ft_swap(&d, &e);
	printf("%i\n%i\n", d, e);
	return (0);
}
