/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <jcapistr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:57:45 by jcapistr          #+#    #+#             */
/*   Updated: 2022/11/24 22:08:15 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)malloc(nmemb * size);
	if (!ptr)
		return (0);
	while (i < (nmemb * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
