/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitcoins.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:54:45 by joseoliv          #+#    #+#             */
/*   Updated: 2025/08/01 23:11:28 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINS_H
#define BITCOINS_H

#include "Date.hpp"
#include <map>
#include <algorithm>
#include <fstream>

#define FILE_ERROR			"Error: could not open file."
#define	HEADER_ERROR		"Error: inpossible configuration of => "
#define RANGE_NUM_ERROR		"Error: too large a number"
#define NEGATIVE_NUM_ERROR	"Error: not a positive number."
#define INPUT_ERROR			"Error: bad input => "

//error handler
int		argumentError();
int		headerError(std::string line);
void	RangeNumError();
void	negNUmError();
void	inputNumError(std::string input);

//input handler
void	readInput(char *input);
void	validateLine(std::string line);
Date	handleDate(const std::string &line);

#endif