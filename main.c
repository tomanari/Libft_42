#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str;
	str = "chata que nao gosta de festa junina";


	char *ret = ft_substr(str, 24, 12);
	printf("%s\n", ret);
	printf("%s\n", ft_substr(str, 24, 12));
}