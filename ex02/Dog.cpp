/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:12:40 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/07 16:14:58 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("dog") {
	this->_brain = new Brain();
	std::cout << DOG_LOG_PREFIX << " Default Constructor" << std::endl;
};

Dog	&Dog::operator=(const Dog &rhs)
{
	this->_type = rhs._type;
	if (rhs._brain)
		_brain = new Brain(*rhs._brain);
	std::cout << DOG_LOG_PREFIX << " Assignment Operator Called" << std::endl;
	return (*this);
}

Dog::Dog(const Dog &dog): Animal(dog) {
	_brain = NULL;
	*this = dog;
	std::cout << DOG_LOG_PREFIX << " Copy Constructor" << std::endl;
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << DOG_LOG_PREFIX << " Adeus :(" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << DOG_LOG_PREFIX << " b-ArCK!" << std::endl;
}
