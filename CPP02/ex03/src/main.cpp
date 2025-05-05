/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 02:55:34 by cereais           #+#    #+#             */
/*   Updated: 2025/05/05 15:04:03 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

#include <iostream>

int main()
{
    //Beloved Triangle
    Point A(0, 0);
    Point B(5, 0);
    Point C(0, 5);

    Point P1(1, 1);
    std::cout << "Test 1 (Inside): " << (bsp(A, B, C, P1) ? "Inside" : "Outside") << std::endl;

    Point P2(5, 5);
    std::cout << "Test 2 (Outside): " << (bsp(A, B, C, P2) ? "Inside" : "Outside") << std::endl;

    Point P3(2.5, 0);
    std::cout << "Test 3 (On Edge): " << (bsp(A, B, C, P3) ? "Inside" : "Outside") << std::endl;

    Point P4(0, 0);
    std::cout << "Test 4 (Vertex): " << (bsp(A, B, C, P4) ? "Inside" : "Outside") << std::endl;

    Point P5(0.01f, 0.01f);
    std::cout << "Test 5 (Barely Inside): " << (bsp(A, B, C, P5) ? "Inside" : "Outside") << std::endl;

    return 0;
}
