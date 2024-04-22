/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derjavec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:27:00 by derjavec          #+#    #+#             */
/*   Updated: 2023/10/24 11:27:01 by derjavec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_putnbr(char *nbr, int count_digits, int n, int *i)
{
	char	nb;

	if (n < 0)
	{
		nbr[0] = '-';
		n = -n;
		(*i)++;
	}
	if (n > 9)
	{
		ft_putnbr(nbr, count_digits, n / 10, i);
	}
	nb = n % 10 + 48;
	nbr[*i] = nb;
	(*i)++;
}

static int	count_digits(int n)
{
	int	count;
	int	sign;

	sign = n;
	count = 1;
	if (n == 0)
		count = 2;
	if (n < 0)
	{
		sign = -n;
		count++;
	}
	while (sign >= 1)
	{
		sign = sign / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		digits;
	int		i;

	if (n == -2147483648)
	{
		nbr = malloc(12 * sizeof(char));
		if (nbr == NULL)
			return (NULL);
		return (ft_memcpy(nbr, "-2147483648", 12));
	}
	digits = count_digits(n);
	nbr = malloc(digits * sizeof(char));
	if (nbr == NULL)
		return (NULL);
	i = 0;
	ft_putnbr(nbr, digits, n, &i);
	nbr[digits - 1] = '\0';
	return (nbr);
}
