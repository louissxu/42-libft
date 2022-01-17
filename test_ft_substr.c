#include "libft.h"
#include "ft_substr.c"
#include <stdio.h>

int main(void)
{
	char *s = ft_substr("tripouille", 100, 1);
	printf("s is: <%s>\n", s);
}
