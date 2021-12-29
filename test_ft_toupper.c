#include <ctype.h>
#include "ft_toupper.c"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int i = 0;
	int error_found = 0;
	int inbuilt_result;
	int ft_result;
	int prev_success = 1;

	printf("Testing:\n");
	while (i <= UCHAR_MAX)
	{
		ft_result = ft_toupper(i);
		inbuilt_result = toupper(i);
		if (ft_result == inbuilt_result)
		{
			if (!prev_success)
			{
			//	printf("\n");
			}
			printf(".");
			prev_success = 1;
		}
		else
		{
			if (prev_success)
			{
				printf("\n");
			}
			printf("- DIFFERENT -    arg: %c    inbuilt: %c    ft: %c\n", i, inbuilt_result, ft_result);
			prev_success = 0;
			error_found = 1;
		}
		i++;
	}
	printf("\n");
	if (error_found)
	{
		printf("Errors found. See above\n");
	}
	else
	{
		printf("All tests pass\n");
	}
}
