/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:33:43 by coder             #+#    #+#             */
/*   Updated: 2022/08/05 01:10:50 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
# define CONVERSIONS_H
# include "../ft_printf.h"

typedef struct s_slot	t_slot;

int	deal_with_c(char arg);
int	deal_with_d(int arg);
int	deal_with_i(int arg);
int	deal_with_p(long long int arg);
int	deal_with_s(char *arg);
int	deal_with_u(unsigned int arg);
int	deal_with_x(unsigned int arg);
int	deal_with_x_upper(unsigned int arg);
int	deal_with_percent(char arg);

#endif
