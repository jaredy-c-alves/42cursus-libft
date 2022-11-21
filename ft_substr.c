#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	s_len;
	size_t	end;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	end = 0;
	if (start < s_len)
		end = s_len - start;
	if (end > len)
		end = len;
	d = (char *)malloc(sizeof(char) * (end + 1));
	if (!d)
		return (0);
	ft_strlcpy(d, s + start, end + 1);
	return (d);
}
