/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:05:32 by derjavec          #+#    #+#             */
/*   Updated: 2023/10/31 17:05:58 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	res = malloc ((ft_strlen(s) + 1) * sizeof (char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f (i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
