/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 08:32:23 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/09 13:23:08 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_integer;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed &operator=(const Fixed &fixed);

	bool operator<(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator>(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;

	Fixed operator+(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed) const;
	Fixed operator*(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;

	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	float	toFloat(void) const;
	int		toInt(void) const;
	int getRawBits(void) const;
	void	setRawBits(int const raw);

	static Fixed &max(Fixed &fixed1, Fixed &fixed2);
	static Fixed const &max(const Fixed &fixed1,const Fixed &fixed2);
	static Fixed &min(Fixed &fixed1, Fixed &fixed2);
	static Fixed const &min(const Fixed &fixed1,const Fixed &fixed2);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);


#endif