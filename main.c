#include <stdio.h>
#include "utility.h"

int main()
{
	int number;
	int min = 1;
	int max = 10;
	printf("Enter an integer between %d and %d: ", min, max);
	scanf("%d", &number);
	number = isInRange(min, max, number);
	while (number >= 0)
	{
		printf("%d\n", number);
		number--;
	}
}
