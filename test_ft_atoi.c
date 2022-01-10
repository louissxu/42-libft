#include <stdio.h>
#include "libft.h"

int main(void)
{
	char str[] = "+123";
	printf("Inbuilt %d, FT %d\n", atoi(str), ft_atoi(str));
}
