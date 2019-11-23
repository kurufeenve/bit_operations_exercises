#include <stdio.h>

int	main(void)
{
	int	number;

	printf("enter a number: ");	
	scanf("%d", &number);
	if (number & 1)
	{
		printf("LSB is 1\n");
	}
	else
	{
		printf("LSB is 0\n");
	}
	return (0);
}
