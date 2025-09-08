/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:00:51 by joseoliv          #+#    #+#             */
/*   Updated: 2025/09/08 15:16:34 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/time.h>
#include "../include/PmergeMe.hpp"
#include <iomanip>

int length = 0;

static double get_time_in_seconds() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec + tv.tv_usec / 1000000.0;
}

int main(int argc, char *argv[]) {

	system("clear");
    if (argc == 1) {
        std::cerr << "ERROR! Please insert at least one argument." << std::endl;
        return 1;
    }

    double startVec = get_time_in_seconds();
    try {
        PmergeMe<std::vector<int> > vec(argv + 1);
        vec.printContainer(true);
        vec.mergeSort();
        length = vec._length;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
        return (1);
    }
    double endVec = get_time_in_seconds();

    double startDeq = get_time_in_seconds();
    try {
        PmergeMe<std::deque<int> > deq(argv + 1);
        deq.mergeSort();
        deq.printContainer(false);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
        return (1);
    }
    double endDeq = get_time_in_seconds();

    // 1e6 == 1 000 000
    double vec_time_us = (endVec - startVec) * 1e6;
    double deq_time_us = (endDeq - startDeq) * 1e6;

    std::cout << "Time to process a range of " << length
              << " elements with std::vector : "
              << std::fixed << std::setprecision(5) << vec_time_us << " us" << std::endl;

    std::cout << "Time to process a range of " << length
              << " elements with std::deque : "
              << std::fixed << std::setprecision(5) << deq_time_us << " us" << std::endl;
    return (0);
}
