/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <jcapistr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:57:04 by jcapistr          #+#    #+#             */
/*   Updated: 2022/11/24 11:13:04 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static void	ft_strrev(char *str)
{
	size_t	i;
	size_t	len;
	char	tmp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	size_t	len;
	int		neg;
	char	*str;

	len = 0;
	neg = (n < 0);
	str = ft_calloc((10 + neg + 1), sizeof(*str));
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[len++] = (char)('0' + ft_abs(n % 10));
		n /= 10;
	}
	if (neg)
		str[len] = '-';
	ft_strrev(str);
	return (str);
}
