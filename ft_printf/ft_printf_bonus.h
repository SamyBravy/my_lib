/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:17:44 by alborghi          #+#    #+#             */
/*   Updated: 2024/12/05 18:45:09 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include "../Libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>

# define HEX "0123456789abcdef"
# define FLAGS "-+ 0#."
# define SPEC "cspdiuxX%"

typedef enum e_flags
{
	left_justify,
	force_sign,
	zero_padding,
	hex_form,
	no_sign,
	width,
	precision,
}		t_flags;

typedef struct s_params
{
	char	flags[8];
	int		width;
	int		precision;
}	t_params;

// ft_printf_bonus.c
int		handle_param(const char *str, int *i, va_list args);
int		handle_flags(const char *str, int *i, t_params *flags);
int		add_flag(const char *str, int *i, t_params *flags);
char	*str_dup_till_charset(const char *str, const char *charset);
int		check_allowed_flags(char *flags, char *allowed);
int		ft_printf(const char *str, ...);

// ft_parsing_bonus.c
int		handle_flags2(const char *str, int *i, t_params *flags);

// ft_char_bonus.c
int		print_char_flags(int c, t_params *flags);
int		ft_putchar(char c);

// ft_hexa.c
char	*handle_padding(t_params *flags, char *str, long int n);
char	*calc_hexa(unsigned int n);
void	ft_strtoupper(char *str);
int		print_hexa(long int n, char opt, t_params *flags);

// ft_void.c
int		print_void(void *ptr, t_params *flags);

// ft_nbrs.c
char	*ft_itoa_no_sign(int n);
int		print_int(int n, t_params *flags);
char	*ft_utoa(unsigned int n);
int		print_u_int(unsigned int n, t_params *flags);

// ft_strs.c
int		print_str(char *s, t_params *flags);

#endif