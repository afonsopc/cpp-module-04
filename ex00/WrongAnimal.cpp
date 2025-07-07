/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:12:40 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/07 16:01:06 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("wrongAnimal") {
	std::cout << WRONG_ANIMAL_LOG_PREFIX << " Default Constructor" << std::endl;
};

WrongAnimal::WrongAnimal(std::string type) {
	this->_type = type;
	std::cout << WRONG_ANIMAL_LOG_PREFIX << " Created with type " << type << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->_type = rhs.getType();
	std::cout << WRONG_ANIMAL_LOG_PREFIX << " Assignment Operator Called" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	*this = wrongAnimal;
	std::cout << WRONG_ANIMAL_LOG_PREFIX << " Copy Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << WRONG_ANIMAL_LOG_PREFIX << " Adeus :( (said " << getType() << ")" << std::endl;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << WRONG_ANIMAL_LOG_PREFIX << " Wrong Animal Sound (said " << getType() << ")" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}
