/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:10:57 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/09 13:47:20 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

std::cout << "----------------------------------------" << std::endl;

a = b;

std::cout << a + b << std::endl;
std::cout << a - b << std::endl;
std::cout << a * 2 << std::endl;
std::cout << a / 2 << std::endl;

if (a == b)
	std::cout << "They are equal" << std::endl;
a++;
if (a != b)
	std::cout << "They are different" << std::endl;
if (a > b)
	std::cout << "a is greater than b" << std::endl;
a--;
a--;
if (a < b)
	std::cout << "a is less than b" << std::endl;
a++;
if (a >= b)
	std::cout << "a is greater or equal to b" << std::endl;
if (a <= b)
	std::cout << "a is less or equal b" << std::endl;
a++;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

return 0;
}