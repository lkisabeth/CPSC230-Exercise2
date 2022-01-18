#include <stdio.h>

int isInRange (int min, int max, int number)
{
	if (min <= number && number <= max)
	{
		return number;
	}
	else
	{
		while (number < min || max < number)
		{
			printf("That wasn't between %d and %d. Try again: ", min, max);
			scanf("%d", &number);
		}
		return number;
	}
}
