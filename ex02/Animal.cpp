/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:12:40 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/07 16:23:10 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("animal") {
	std::cout << ANIMAL_LOG_PREFIX << " Default Constructor" << std::endl;
};

Animal::Animal(std::string type) {
	this->_type = type;
	std::cout << ANIMAL_LOG_PREFIX << " Created with type " << type << std::endl;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	this->_type = rhs.getType();
	std::cout << ANIMAL_LOG_PREFIX << " Assignment Operator Called" << std::endl;
	return (*this);
}

Animal::Animal(const Animal &animal) {
	*this = animal;
	std::cout << ANIMAL_LOG_PREFIX << " Copy Constructor" << std::endl;
}

Animal::~Animal(void) {
	std::cout << ANIMAL_LOG_PREFIX << " Adeus :( (said " << getType() << ")" << std::endl;
}

std::string	Animal::getType(void) const {
	return (this->_type);
}