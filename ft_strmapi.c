#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dest;

	i = 0;
	while (s[i])
		i++;
	dest = malloc(i+1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = (char)(*f)(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
