/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:22:06 by coder             #+#    #+#             */
/*   Updated: 2022/08/05 01:08:42 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"

int	deal_with_x(unsigned int arg)
{
	return (ft_putnbase(arg, "0123456789abcdef"));
}

int	deal_with_x_upper(unsigned int arg)
{
	return (ft_putnbase(arg, "0123456789ABCDEF"));
}
