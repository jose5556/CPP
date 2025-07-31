/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitcoins.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:54:45 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/31 17:26:40 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINS_H
#define BITCOINS_H

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

#define FILE_ERROR			"Error: could not open file."
#define	HEADER_ERROR		"Error: inpossible configuration of => "
#define RANGE_NUM_ERROR		"Error: too large a number"
#define NEGATIVE_NUM_ERROR	"Error: not a positive number."
#define INPUT_ERROR			"Error: bad input => "

#define	START_INDEX_DATE	0
#define	END_INDEX_DATE		10

//error handler
int		argumentError();
int		headerError(std::string line);
void	RangeNumError();
void	negNUmError();
void	inputNumError(std::string input);

#endif