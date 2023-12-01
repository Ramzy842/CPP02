/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:22:50 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/01 12:24:51 by rchahban         ###   ########.fr       */
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
    	this->fixed = fx.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
	return (this->fixed);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed = raw;
}

Fixed::Fixed(const int number)
{
	fixed = number * 256;
	std::cout << "Int constructor called!" << std::endl;
}
Fixed::Fixed(const float number)
{
	fixed = ((int)roundf(number * 256));
	std::cout << "Float constructor called!" << std::endl;
}
float Fixed::toFloat(void) const {
	return ((float)fixed / 256);
}
int Fixed::toInt(void) const
{
	return ((int)(roundf((float)fixed / 256)));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fx)
{
	os << fx.toFloat();
	return os;
}

const Fixed& Fixed::min(const Fixed& fx1, const Fixed& fx2)
{
	int fixed1 = fx1.fixed;
	int fixed2 = fx2.fixed;
	return (fixed1 > fixed2 ? fx2 : fx1);
}
Fixed& Fixed::min(Fixed& fx1, Fixed& fx2)
{
	int fixed1 = fx1.fixed;
	int fixed2 = fx2.fixed;
	return (fixed1 > fixed2 ? fx2 : fx1);
}
Fixed& Fixed::max(Fixed& fx1, Fixed& fx2)
{
	int fixed1 = fx1.fixed;
	int fixed2 = fx2.fixed;
	return (fixed1 > fixed2 ? fx1 : fx2);
}
const Fixed& Fixed::max(const Fixed& fx1, const Fixed& fx2)
{
	int fixed1 = fx1.fixed;
	int fixed2 = fx2.fixed;
	return (fixed1 > fixed2 ? fx1 : fx2);
}

bool Fixed::operator>(const Fixed& fx)
{
	return (this->fixed > fx.fixed);
}
bool Fixed::operator<(const Fixed& fx){
	return (this->fixed < fx.fixed);
}
bool Fixed::operator<=(const Fixed& fx){
	return (this->fixed <= fx.fixed);
}
bool Fixed::operator>=(const Fixed& fx){
	return (this->fixed >= fx.fixed);
}
bool Fixed::operator==(const Fixed& fx){
	return (this->fixed == fx.fixed);
}
bool Fixed::operator!=(const Fixed& fx){
	return (this->fixed != fx.fixed);
}

Fixed& Fixed::operator++(void)
{
	(this->fixed)++;
	return (*this);
}
Fixed& Fixed::operator--(void)
{
	(this->fixed)--;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++(this->fixed);    
	return temp;        
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--(this->fixed);
	return temp;
}

Fixed	Fixed::operator+(const Fixed &fx) const
{
	return (this->toFloat() + fx.toFloat());
}
Fixed	Fixed::operator-(const Fixed &fx) const{
	return (this->toFloat() - fx.toFloat());
}
Fixed	Fixed::operator*(const Fixed &fx) const{
	return (this->toFloat() * fx.toFloat());
}
Fixed	Fixed::operator/(const Fixed &fx) const{
	return (this->toFloat() / fx.toFloat());
}