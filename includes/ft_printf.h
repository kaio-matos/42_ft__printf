/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:33:43 by coder             #+#    #+#             */
/*   Updated: 2022/09/01 01:00:54 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <libft.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_slot
{
	char	*string;
	char	conversion;
	int		p_initial;
	int		p_end;
	int		length;
}	t_slot;

int		ft_printf(const char *str, ...);
int		deal_args(t_slot finded, va_list args, int printed);

int		ft_putchar(char c);
int		ft_putstrn(char	*str, int n);
int		ft_putstr(char	*str);
int		ft_putnbase(unsigned long long nb, char *base);

int		deal_with_c(char arg);
int		deal_with_d(int arg);
int		deal_with_i(int arg);
int		deal_with_p(long long int arg);
int		deal_with_s(char *arg);
int		deal_with_u(unsigned int arg);
int		deal_with_x(unsigned int arg);
int		deal_with_x_upper(unsigned int arg);
int		deal_with_percent(char arg);

/**
 * @brief Checks if a determined character is a printf conversion
 * 
 * @param c char
 * @return int 1 or 0
 */
int		ft_isconversion(char c);

/**
 * @brief Checks if a string is made out of digits only
 * 
 * @param str string
 * @return int 1 or 0
 */
int		ft_strdigit(char *str);

/**
 * @brief Returns the character `c` found position inside the string `s`
 * 
 * @param s string
 * @param c char
 * @return int position or -1
 */
int		ft_strchri(const char *s, int c);

/**
 * @brief Find a slot inside a string
 * 
 * @param string string
 * @param starts int where to start searching
 * @return t_slot that have the readed string, the current printf conversion,
 * 			the initial position, the final position of the slot,
 * 			and the length (including % and conversion)
 */
t_slot	get_slot(char *string, int starts);

/**
 * @brief Reset a slot
 * 
 * @param item t_slot
 * @return t_slot the same slot cleared
 */
t_slot	reset_slot(t_slot *item);

#endif
