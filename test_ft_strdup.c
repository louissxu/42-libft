#include "libft.h"
#include "ft_strdup.c"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *s;
	char *s2;
	s = ft_strdup((char*)"coucou");
	s2 = ft_strdup((char*)"coucou");
	printf("string 1: %s    string 2: %s \n", s, s2);
	printf("same? %d\n", strcmp(s, s2));
	printf("test %d\n", strcmp("", ""));
}
