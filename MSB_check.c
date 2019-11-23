#include <stdio.h>
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

int	main(void)
{
	int	number;

	printf("enter a number: ");	
	scanf("%d", &number);
	print_bits(number);
	number >>= 31;
	print_bits(number);
	if (number & -1)
	{
		printf("MSB is 1\n");
	}
	else
	{
		printf("MSB is 0\n");
	}
	return (0);
}
