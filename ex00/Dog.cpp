/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:12:40 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/06 21:57:38 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("dog") {
	std::cout << DOG_LOG_PREFIX << " Default Constructor" << std::endl;
};

Dog	&Dog::operator=(const Dog &rhs)
{
	this->_type = rhs._type;
	std::cout << DOG_LOG_PREFIX << " Assignment Operator Called" << std::endl;
	return (*this);
}

Dog::Dog(const Dog &animal) {
	*this = animal;
	std::cout << DOG_LOG_PREFIX << " Copy Constructor" << std::endl;
}

Dog::~Dog(void) {
	std::cout << DOG_LOG_PREFIX << " Adeus :(" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << DOG_LOG_PREFIX << " b-ArCK!" << std::endl;
}
