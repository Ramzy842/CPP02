/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:22:47 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/26 05:19:24 by rchahban         ###   ########.fr       */
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
		Fixed();
		~Fixed();
		Fixed (const Fixed& fx);
		Fixed& operator=(const Fixed& fx);
		int getRawBits(void) const;
		void setRawBits( int const raw );
};

#endif