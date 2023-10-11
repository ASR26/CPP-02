/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 08:32:26 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/09 09:13:47 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_integer = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Integer constructor called" << std::endl;
	this->_integer = (value << this->bits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_integer = roundf(value * (1 << this->bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integer);
}

void	Fixed::setRawBits(int const raw)
{
	this->_integer = raw;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_integer = fixed.getRawBits();
	return(*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

float	Fixed::toFloat(void) const
{
	return(float(this->_integer) / (1 << this->bits));
}

int		Fixed::toInt(void) const
{
	return (this->_integer >> this->bits);
}
