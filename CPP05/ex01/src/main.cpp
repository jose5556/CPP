/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:05:03 by cereais           #+#    #+#             */
/*   Updated: 2025/05/26 18:48:29 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main(void) {
	
	try
    {
        Bureaucrat first(150, "first");
        std::cout << first << std::endl;
        first.addGrade();
        std::cout << first << std::endl;
        first.decrementGrade();
        std::cout << first << std::endl;
        first.decrementGrade();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat second(160, "second");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat third(0, "third");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
