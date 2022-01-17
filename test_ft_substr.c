#include <stdio.h>
#include "ft_substr.c"
#include <string.h>

int main(void)
{
	char *s = ft_substr("tripouille", 100, 1);
	printf("The result string is: %s\n", s);
	printf("The result pass/fail is: %d\n", strcmp(s, ""));
	printf("s is: <%s>\n", s);
}
