/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 08:32:26 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/09 13:26:17 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_integer = 0;
}

Fixed::Fixed(const int value)
{
	this->_integer = (value << this->bits);
}

Fixed::Fixed(const float value)
{
	this->_integer = roundf(value * (1 << this->bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

int	Fixed::getRawBits(void) const
{
	return (this->_integer);
}

void	Fixed::setRawBits(int const raw)
{
	this->_integer = raw;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
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

bool Fixed::operator<(const Fixed &fixed) const
{
	if (this->toFloat() < fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	if (this->toFloat() > fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	if (this->toFloat() <= fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	if (this->toFloat() >= fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	if (this->toFloat() == fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	if (this->toFloat() != fixed.toFloat())
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	this->_integer++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	operator++();
	return (tmp);
}


Fixed &Fixed::operator--(void)
{
	this->_integer--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	operator--();
	return (tmp);
}

Fixed &Fixed::max(Fixed &fixed1,Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed const &Fixed::max(const Fixed &fixed1,const Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed &Fixed::min(Fixed &fixed1,Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed const &Fixed::min(const Fixed &fixed1,const Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}