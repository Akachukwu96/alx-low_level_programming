#include <stdio.h>

/**
 * fibonacci - prints fibonacci sequence
 *
 */
void fibonacci(void)
{
	int i = 0;

	while (i <= 34)
	{
		if (i == 0)
		{
			i++;
		}
		printf("%d\n", i);
		if (i != 1)
		{
			i = i + (i - 1);
		}
	}
}
