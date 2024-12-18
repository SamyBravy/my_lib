/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:10:27 by sdell-er          #+#    #+#             */
/*   Updated: 2024/08/01 20:12:27 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(char const *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

int	ft_strlen_int(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
