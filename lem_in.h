/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <agiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 14:45:17 by agiulian          #+#    #+#             */
/*   Updated: 2017/04/27 16:47:30 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "libft/libft/includes/libft.h"
# include "libft/libft/includes/get_next_line.h"
# include "libft/printf/ft_printf.h"

typedef struct	s_lem
{
	t_list		*begin;
	int			ant_nb;
	int			start;
	int			end;
	int			tube;
	char		*start_s;
	char		*end_s;
	t_list		*tubes;
	t_list		*rooms;
}				t_lem;

#endif
