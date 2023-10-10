/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:21:09 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/10 12:10:33 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool check_vertex(Point const a, Point const b, Point const c, Point const point)
{
	if (a.getX() == point.getX() && a.getY() == point.getY())
		return (false);
	if (b.getX() == point.getX() && b.getY() == point.getY())
		return (false);
	if (c.getX() == point.getX() && c.getY() == point.getY())
		return (false);
	return (true);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (!check_vertex(a, b, c, point))
		return (false);
	Fixed const ab = ((b.getY() - a.getY()) * (point.getX() - a.getX()) - (b.getX() - a.getX()) * (point.getX() - a.getX()));
	Fixed const bc = ((c.getY() - b.getY()) * (point.getX() - b.getX()) - (c.getX() - b.getX()) * (point.getX() - b.getX()));
	Fixed const ca = ((a.getY() - c.getY()) * (point.getX() - c.getX()) - (a.getX() - c.getX()) * (point.getX() - c.getX()));

	if ((ab > 0 && bc > 0 && ca > 0) || (ab < 0 && bc < 0 && ca < 0))
		return (true);
	return (false);
}