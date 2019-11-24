#include <stdlib.h>

void	print_bits(int	n)
{
	char	*bits_array;
	int	i;

	bits_array = (char *)malloc(sizeof(char) * 33);
	bits_array[32] = 0;
	for (i = 31; i >= 0; --i)
	{
		bits_array[i] = n & 1;
		n = n >> 1;
	}
	for (i = 0; i < 32; ++i)
	{
		printf("%d", bits_array[i]);
	}
	printf("\n");
}

