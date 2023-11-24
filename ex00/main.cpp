/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:22:29 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/24 00:35:28 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

// int main() {
//     // Create an object using the default constructor
//     Fixed obj1;

//     // Create a new object using the copy constructor
//     Fixed obj2(obj1);

//     // Use the copy assignment operator
//     Fixed obj3;
//     obj3 = obj1;

//     return 0;
// }

#include <iostream>

// This is like a recipe for a toy
class Toy {
public:
    // This is how we make a new toy from scratch
    Toy() {
        std::cout << "A new toy is created!" << std::endl;
    }

    // This is how we make a new toy that looks like another toy
    Toy(const Toy& other) {
		(void) other;
        std::cout << "A new toy is created to look like another toy!" << std::endl;
        // In a real program, we would copy the details from the other toy to this new one
    }

    // This is how we make a toy look like another toy after it's already made
    Toy& operator=(const Toy& other) {
		(void) other;
        std::cout << "A toy is made to look like another toy through assignment!" << std::endl;
        // In a real program, we would copy the details from the other toy to this one
        return *this;
    }
};

int main() {
    // Imagine this is your first toy
    Toy firstToy;

    // Now, let's make a second toy that looks exactly like the first one
    Toy secondToy(firstToy);

    // Uh-oh! We need a third toy that looks like the first one, but it's not there yet
    Toy thirdToy;

    // Let's make the third toy look like the first one
    thirdToy = firstToy;

    return 0;
}

