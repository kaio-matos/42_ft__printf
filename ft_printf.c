/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 01:30:47 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/08/18 01:02:51 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	char	*result;
	int		printed;
	t_slot	finded;
	va_list	args;

	if (!str)
		return (-1);
	va_start(args, str);
	result = ft_strdup(str);
	finded = get_slot(result, 0);
	printed = deal_args(finded, args, 0);
	free(result);
	va_end(args);
	return (printed);
}
