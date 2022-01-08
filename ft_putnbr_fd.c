#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd_recursive(long int n, int fd)
{
	if (n >= 10)
	{
		ft_putnbr_fd_recursive(n / 10, fd);
		ft_putnbr_fd_recursive(n % 10, fd);
	}
	ft_putchar_fd('0' + n, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	long_n;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		long_n = n * -1;
	}
	else
	{
		long_n = n;
	}
	ft_putnbr_fd_recursive(long_n, fd);
}
