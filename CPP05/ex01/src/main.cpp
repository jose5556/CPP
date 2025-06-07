/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:05:03 by cereais           #+#    #+#             */
/*   Updated: 2025/06/07 17:45:58 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat quim(30, "Quim");
        std::cout << quim << std::endl;
        Form person("person", 50, 50);
        std::cout << person << std::endl;
        quim.signForm(person);
        std::cout << person << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << std::endl;
        Bureaucrat manuel(60, "manuel");
        std::cout << manuel << std::endl;
        Form paper("paper", 50, 50);
        std::cout << paper << std::endl;
        manuel.signForm(paper);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
