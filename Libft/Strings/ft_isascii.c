/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:07:36 by sdell-er          #+#    #+#             */
/*   Updated: 2023/10/17 19:49:31 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	char	c;
	
	c = "7";
	printf(" %d ", ft_isascii(c));
	return (0);
}
*/
