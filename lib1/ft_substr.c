#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (free(s), ft_calloc (1, 1));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	len++;
	res = (char *)malloc(len * sizeof(char));
	if (!res)
		return (free(s), NULL);
	ft_strlcpy(res, (s + start), (len));
	free(s);
	return (res);
}
