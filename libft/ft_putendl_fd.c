
#include "libft.h"

void
	ft_putendl_fd(char *s, int fd)
{
	const char	ln = '\n';

	write(fd, s, ft_strlen(s));
	write(fd, &ln, 1);
}
