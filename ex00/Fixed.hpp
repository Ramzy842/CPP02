/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:22:47 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/24 00:33:00 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fixed;
		static const int fracBits = 8;
	public:
		Fixed() {
			std::cout << "constructor called" << std::endl;
			fixed = 0;
		}
		Fixed (const Fixed& other)
		{
			(void) other;
			std::cout << "Copy constructor called" << std::endl;
		}
		Fixed& operator=(const Fixed& other) {
        	std::cout << "Copy assignment operator called" << std::endl;
        	// Check for self-assignment
        	if (this != &other) {
            	// Copy the attributes from 'other' to the current object
        	}
        	return *this;
    	}
};

#endif