/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:16:48 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/23 15:31:27 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

#include "AMateria.hpp"

typedef struct s_list
{
	AMateria		*content;
	struct s_list	*next;
}	t_list;

#endif
