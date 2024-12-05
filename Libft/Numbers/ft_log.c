/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:48:44 by sdell-er          #+#    #+#             */
/*   Updated: 2024/12/05 18:48:44 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_log(int nb, int base)
{
	int	res;

	res = 0;
	if (nb <= 0 || base <= 0 || base == 1)
		return (-1);
	while (nb > 0)
	{
		res++;
		nb /= base;
	}
	return (res);
}

int	ft_ulog(unsigned int nb, unsigned int base)
{
	unsigned int	res;

	res = 0;
	if (nb == 0 || base == 0 || base == 1)
		return (0);
	while (nb > 0)
	{
		res++;
		nb /= base;
	}
	return (res);
}

size_t	ft_stlog(size_t nb, size_t base)
{
	size_t	res;

	res = 0;
	if (nb == 0 || base == 0 || base == 1)
		return (0);
	while (nb > 0)
	{
		res++;
		nb /= base;
	}
	return (res);
}

long	ft_llog(long nb, long base)
{
	long	res;

	res = 0;
	if (nb == 0 || base == 0 || base == 1)
		return (0);
	while (nb > 0)
	{
		res++;
		nb /= base;
	}
	return (res);
}
