/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 03:17:32 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/10 05:18:23 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <limits>

#define ERRORARGUMENTS "ERROR! Wrong number of arguments"

bool	isInt(const std::string &argument);
bool	isFloat(const std::string &argument);
bool	isDouble(const std::string &argument);
