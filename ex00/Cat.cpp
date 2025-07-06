/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:12:40 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/06 21:57:13 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("cat") {
	std::cout << CAT_LOG_PREFIX << " Default Constructor" << std::endl;
};

Cat	&Cat::operator=(const Cat &rhs)
{
	this->_type = rhs._type;
	std::cout << CAT_LOG_PREFIX << " Assignment Operator Called" << std::endl;
	return (*this);
}

Cat::Cat(const Cat &animal) {
	*this = animal;
	std::cout << CAT_LOG_PREFIX << " Copy Constructor" << std::endl;
}

Cat::~Cat(void) {
	std::cout << CAT_LOG_PREFIX << " Adeus :(" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << CAT_LOG_PREFIX << " meow!" << std::endl;
}
