/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:04:42 by derjavec          #+#    #+#             */
/*   Updated: 2023/10/19 10:04:45 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	len;
	int	count;

	len = ft_strlen(str);
	count = 0;
	i = len;
	while (i >= 0)
	{
		if (str[i] != (unsigned char)c)
			count++;
		else
			return ((char *)str + (len - count));
		i--;
	}
	return (NULL);
}
