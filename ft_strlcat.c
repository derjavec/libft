/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:15:18 by derjavec          #+#    #+#             */
/*   Updated: 2023/10/18 14:27:58 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	if (!dst && !dst_size)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	i = len_dst;
	j = 0;
	if (len_dst >= dst_size)
		return (ft_strlen(src) + dst_size);
	if (dst_size == 0)
		return (len_dst + ft_strlen(src));
	if (len_dst < dst_size - 1)
	{
		while (src[j] && (j < dst_size - len_dst - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(src) + len_dst);
}
