
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	digit;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		digit = (unsigned int)(nb * -1);
	}
	else
		digit = (unsigned int)nb;
	if (digit >= 10)
		ft_putnbr_fd(digit / 10, fd);
	ft_putchar_fd((char)(digit % 10 + 48), fd);
}
