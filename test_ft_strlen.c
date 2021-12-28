#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"
#include <stdlib.h>

#define NUM_TESTS 6

int main(void)
{
	char tests[NUM_TESTS][20] = {"hello", "world", "a", "", "long test something"};
	int i = 0;
	int ft_result;
	int inbuilt_result;
	while (i < NUM_TESTS)
	{
		ft_result = ft_strlen(tests[i]);
		inbuilt_result = strlen(tests[i]);
		if (ft_result == inbuilt_result)
		{
			printf("same - ");
		}
		else
		{
			printf("DIFFERENT - ");
		}
		printf("Result: ft %d    ", ft_result);
		printf("inbuilt %d    ", inbuilt_result);
		printf("Test: %s\n", tests[i]);
		i++;
	}
}
