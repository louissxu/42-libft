#include <stdio.h>
#include "ft_isalnum.c"
#include <ctype.h>

int main(void)
{
	unsigned char tests[] = {'a', 'b', 'z', '1', '5', '9', ' ', 'A', 'B', 'Z', '!', '[', '{', '\0'};
	int i = 0;
	int ft_result;
	int inbuilt_result;

	while (tests[i])
	{
		printf("Testing: %c ", tests[i]);
		ft_result = ft_isalnum(tests[i]);
		inbuilt_result = isalnum(tests[i]);
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

