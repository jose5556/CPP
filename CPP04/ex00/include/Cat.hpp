/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:12:55 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/14 17:31:58 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {
	
	Cat();
	Cat(std::string type);
	Cat(const Cat& copy);
	Cat(const Cat& copy);
};