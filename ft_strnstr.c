/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:04:34 by derjavec          #+#    #+#             */
/*   Updated: 2023/10/19 13:04:35 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *c, size_t len)
{
	size_t	i;
	size_t	j;

	if (c[0] == '\0')
		return ((char *)str);
	if (len == 0)
		return (NULL);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == c[j] && (i + j) < len)
		{
			if (c[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}				
		i++;
	}
	return (NULL);
}
