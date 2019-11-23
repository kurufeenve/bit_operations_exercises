#include <stdio.h>

int	main(void)
{
	int	number;
	int	num_of_bits;
	int	msb;

	printf("enter a number of type int: ");	
	scanf("%d", &number);
	num_of_bits = sizeof(number) * 8;
	msb = 1 << (num_of_bits - 1);
	if (number & msb)
	{
		printf("MSB is 1\n");
	}
	else
	{
		printf("MSB is 0\n");
	}
	return (0);
}
