/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:07:54 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/08/05 01:14:06 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstrn(char	*str, int n)
{
	int			i;
	int			printed;

	i = 0;
	printed = 0;
	while (*str && i < n)
	{
		printed += ft_putchar(str[i]);
		i++;
	}
	return (printed);
}

int	ft_putstr(char *str)
{
	int	printed;

	printed = 0;
	while (*str)
	{
		printed += ft_putchar(*str);
		str++;
	}
	return (printed);
}

int	ft_putnbase(unsigned long long nb, char *base)
{
	int		printed;
	size_t	base_len;

	printed = 0;
	base_len = ft_strlen(base);
	if (nb >= base_len)
		printed += ft_putnbase(nb / base_len, base);
	printed += ft_putchar(base[nb % base_len]);
	return (printed);
}
