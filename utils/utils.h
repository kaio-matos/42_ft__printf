/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:09:46 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/08/03 00:37:19 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

int	ft_putchar(char c);
int	ft_putstrn(char	*str, int n);
int	ft_putstr(char	*str);
int	ft_putnbase(unsigned long long nb, char *base);

#endif
