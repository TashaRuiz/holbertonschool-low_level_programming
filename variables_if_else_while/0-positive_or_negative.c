#include <stdio.h>

/**
 * Making a code than ran
 *
 * integer positive, equal and negative
 */

int main(void)
{
	int n = 5;

	while (1)
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
		break;
	}
	return (0);
}
