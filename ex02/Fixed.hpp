/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:22:47 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/01 11:11:14 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int fixed;
		static const int fracBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int number);
		Fixed(const float number);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed (const Fixed& fx);
		Fixed& operator=(const Fixed& fx);
		int getRawBits(void) const;
		void setRawBits( int const raw );
		
		static const Fixed& min(const Fixed& fx1, const Fixed& fx2);
		static Fixed& min(Fixed& fx1, Fixed& fx2);
		static Fixed& max(Fixed& fx1, Fixed& fx2);
		static const Fixed& max(const Fixed& fx1, const Fixed& fx2);
		
		bool operator>(const Fixed& fx);
		bool operator<(const Fixed& fx);
		bool operator<=(const Fixed& fx);
		bool operator>=(const Fixed& fx);
		bool operator==(const Fixed& fx);
		bool operator!=(const Fixed& fx);
		
		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		
		Fixed	operator+(const Fixed &fx) const;
		Fixed	operator-(const Fixed &fx) const;
		Fixed	operator*(const Fixed &fx) const;
		Fixed	operator/(const Fixed &fx) const;


};

std::ostream& operator<<(std::ostream& os, const Fixed& fx);

#endif