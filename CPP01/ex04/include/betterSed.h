/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   betterSed.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 00:34:07 by cereais           #+#    #+#             */
/*   Updated: 2025/04/27 02:34:46 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BETTERSED_H
# define BETTERSED_H

#include <iostream>
#include <string>
#include <fstream>

std::string	replaceTypeFile(char *file);
bool		inputVerification(int argc, char **argv);

#endif