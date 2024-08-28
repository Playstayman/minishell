#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}

// int main(void)
// {
// 	char a[] = "Hello, I am a happy healthy string! Who are you?";
// 	ft_putstr_fd(a, 2);
// 	return(0);
// }