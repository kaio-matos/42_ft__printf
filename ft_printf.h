/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:33:43 by coder             #+#    #+#             */
/*   Updated: 2022/08/05 01:38:03 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include "conversions/conversions.h"
# include "slot/slot.h"
# include "utils/utils.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	deal_args(t_slot finded, va_list args, int printed);

#endif
