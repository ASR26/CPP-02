/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:47:35 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/10 11:45:01 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point();
	Point(Fixed const &x, Fixed const &y);
	Point(const Point &point);
	~Point();
	
	Point &operator=(const Point &point);

	Fixed const	&getX() const;
	Fixed const	&getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
