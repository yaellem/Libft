#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *x;
	size_t i;

	i = 0;
	x = b;
	b = (void *)malloc(sizeof(int) * len);
	while (malloc(sizeof(int) * len) != NULL)	
	{
//		x = b;
		while (i < len)
		{	
			x[i] = (unsigned char)c;
			i++;
		}
		break;
	}
	return (x);
}
