/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:44:25 by derjavec          #+#    #+#             */
/*   Updated: 2023/10/18 13:50:11 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	from_l_to_r(char *ps, char *pd, size_t n)
{
	size_t	i;

	i = n ;
	while (i > 0)
	{
		pd[i - 1] = ps[i - 1];
		i--;
	}
}

static void	from_r_to_l(char *ps, char *pd, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
}

void	*ft_memmove(void *d, const void *s, size_t n)
{
	char	*ps;
	char	*pd;

	if (d == NULL && s == NULL)
		return (NULL);
	ps = (char *)s;
	pd = (char *)d;
	if (ps == pd)
		return (d);
	if (ps < pd && ps + n > pd)
		from_l_to_r(ps, pd, n);
	else
		from_r_to_l(ps, pd, n);
	return (d);
}
