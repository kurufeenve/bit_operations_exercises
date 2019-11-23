#include <stdio.h>

int	main(void)
{
	int	number;
	int	bit;

	printf("enter a number of type int: ");	
	scanf("%d", &number);
	printf("enter a bit possition (1-32): ");
	scanf("%d", &bit);
	number >>= (bit - 1);
	if (number & 1)
	{
		printf("MSB is 1\n");
	}
	else
	{
		printf("MSB is 0\n");
	}
	return (0);
}
