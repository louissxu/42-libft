#include <stdio.h>
#include "ft_isalpha.c"
#include <ctype.h>

int main(void)
{
	unsigned char tests[] = {'a', 'b', '1', '5', ' ', 'A', 'Z', '\0'};
	int i = 0;
	int ft_result;
	int inbuilt_result;

	while (tests[i])
	{
		printf("Testing: %c ", tests[i]);
		ft_result = ft_isalpha(tests[i]);
		inbuilt_result = isalpha(tests[i]);
		if (ft_result == inbuilt_result)
		{
			printf("- same - ");
		}
		else
		{
			printf("- DIFFERENT - ");
		}
		printf("ft: %d ", ft_result);
		printf("inbuilt: %d\n", inbuilt_result);
		i++;
	}
}

