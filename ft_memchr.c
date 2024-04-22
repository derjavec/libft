/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:17:28 by derjavec          #+#    #+#             */
/*   Updated: 2023/10/19 11:17:30 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *str, int c, size_t size )
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)((char *)str + i));
		i++;
	}
	return (NULL);
}
