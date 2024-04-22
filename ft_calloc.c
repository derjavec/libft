/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:35:52 by derjavec          #+#    #+#             */
/*   Updated: 2023/10/20 12:35:54 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	size_t	size;
	void	*memory;

	size = elementCount * elementSize;
	if (size == 0)
		return (malloc(0));
	else if (size / elementSize != elementCount)
		return (NULL);
	memory = malloc(size);
	if (memory != NULL)
		ft_memset (memory, 0, size);
	return (memory);
}
