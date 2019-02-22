#include "libft.h"

char	*ft_strndup(const chqr *src, size_t n)
{
	char	*dest;
	size_t	len;

	if (!src)
		return (NULL);
	len = ft_strlen(src) + 1;
	if (n < len)
		len = n + 1;
	dest = malloc(sizeof(char) * len);
	ft_strncpy(dest, src, n);
	resturn (dest);
}
