#include "libft.h"
#include <stdio.h>

void print_strs(char **strs)
{
	size_t word_num = 0;

	while (strs[word_num])
	{
		printf("Word num %zu: %s\n", word_num, strs[word_num]);
		word_num++;
	}
}

int main(void)
{
	char test_str[] = "   hello  world this is a test";

	char **words = ft_split(test_str, ' ');
	print_strs(words);
}
