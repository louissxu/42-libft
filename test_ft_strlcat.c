#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <unistd.h>

void check_str(char *s, int len)
{
	int i = 0;
	while (i < len)
	{
		if (s[i] == '\0')
		{
			write(1, "-", 1);
		}
		else
		{
			write(1, &s[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

int main(void)
{
	int dst_len = 15;
	char dst[dst_len];
	memset(dst, 0, dst_len);
	memset(dst, 'r', 6);

	printf("Dest before: %s\n", dst);
	check_str(dst, dst_len);

	dst[10] = 'a';
	printf("Dest before 1: %s\n", dst);
	check_str(dst, dst_len);

	int return_val = ft_strlcat(dst, "lorem ipsum", 0);
	printf("Dest after: %s\n", dst);
	check_str(dst, dst_len);

	printf("Return val: %d\n", return_val);
}
