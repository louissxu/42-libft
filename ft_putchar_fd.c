#include <unistd.h>

void	ft_putchar_ft(char c, int fd)
{
	write(fd, &c, 1);
}
