#include "libft.h"
// #include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main()
// {
// 	char a[] = "Hello, I am a happy healthy string! Who are you?\n";
// 	ft_putstr_fd(a, 2);
// 	ft_putendl_fd(a, 1);
// 	return (0);
// }