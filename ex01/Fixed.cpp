/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:22:50 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/26 05:19:13 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->fixed = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed& fx)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fx;
}

Fixed &Fixed::operator=(const Fixed& fx)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fx)
    	this->fixed = getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed = raw;
}