#include <stdio.h>
#include "ft_print_bits.c"

int		main(void)
{
	int	number;
	int	bit;
	int	mask;

	printf("enter a number: ");
	scanf("%d", &number);
	printf("enter a bit position (1-32): ");	
	scanf("%d", &bit);
	printf("number before setting bit\n");
	print_bits(number);
	mask = 1 << (bit - 1);
	number = number | mask;
	printf("number after setting bit\n");
	print_bits(number);
	return (0);
}
