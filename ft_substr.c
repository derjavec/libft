/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:50:30 by derjavec          #+#    #+#             */
/*   Updated: 2023/10/23 11:50:36 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	lens;

	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	if (start >= lens || len == 0)
		return (ft_strdup(""));
	if (len > (lens - start))
		len = lens - start;
	str = malloc((len + 1) * sizeof (char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[len] = '\0';
	return (str);
}
