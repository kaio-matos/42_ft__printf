/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slot.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:33:30 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/08/05 01:53:15 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLOT_H
# define SLOT_H
# include "../ft_printf.h"

typedef struct s_slot
{
	char	*string;
	char	conversion;
	int		p_initial;
	int		p_end;
	int		length;
}	t_slot;

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
