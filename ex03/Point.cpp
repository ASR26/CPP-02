/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:47:38 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/10 11:45:45 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::Point(Fixed const &x, Fixed const &y): _x(x), _y(y)
{
}

Point::Point(const Point &point): _x(point.getX()), _y(point.getY())
{
}

Point::~Point()
{

}

Point	&Point::operator=(const Point &point)
{
	(void)point;
	return (*this);
}

Fixed	const &Point::getX(void) const
{
	return (this->_x);
}

Fixed	const &Point::getY(void) const
{
	return (this->_y);
}