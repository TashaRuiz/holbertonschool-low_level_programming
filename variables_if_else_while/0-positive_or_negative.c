#include <stdio.h>

/**
 * Making a code than ran
 *
 * integer positive, equal and negative
 */

int main(void)
{
	int n = 5;

	while (n >= -5)
	{
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
		n--;
	}
	return (0);
}
