/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:47:40 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/10 12:12:13 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a = Point(0, 3);
	Point b = Point(0, 0);
	Point c = Point(4, 2);

	Point p1 = Point(1, 1); // inside
	Point p2 = Point(0, 2); // edge
	Point p3 = Point(6, 3); // outside
	Point p4 = Point(0, 0); // vertex

	std::cout << "p1: " << bsp(a, b, c, p1) << std::endl;
	std::cout << "p2: " << bsp(a, b, c, p2) << std::endl;
	std::cout << "p3: " << bsp(a, b, c, p3) << std::endl;
	std::cout << "p4: " << bsp(a, b, c, p4) << std::endl;

	return 0;
}