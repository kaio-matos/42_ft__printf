/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:22:01 by coder             #+#    #+#             */
/*   Updated: 2022/08/05 01:09:51 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"

int	deal_with_p(long long int arg)
{
	int	printed;

	printed = 0;
	if (!arg)
		return (ft_putstr("(nil)"));
	printed += ft_putstr("0x");
	printed += ft_putnbase(arg, "0123456789abcdef");
	return (printed);
}
