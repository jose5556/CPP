/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arguments.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 00:34:07 by cereais           #+#    #+#             */
/*   Updated: 2025/04/27 01:42:29 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGUMENTS_HPP
# define ARGUMENTS_HPP

#include <iostream>
#include <string>
#include <fstream>

class Arguments {
	
	public:

		Arguments(void);
		~Arguments(void);
		const std::string&	getFileName(void) const;
		std::string			getS1(void);
		std::string			getS2(void);
		void				setFileName(std::string	filename);
		void				setS1(std::string	s1);
		void				setS2(std::string	s2);

	private:

		std::string	_filename;
		std::string	_s1;
		std::string	_s2;
};

#endif