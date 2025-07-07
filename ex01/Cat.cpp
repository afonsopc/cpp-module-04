/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:12:40 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/07 16:17:03 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("cat") {
	_brain = new Brain();
	std::cout << CAT_LOG_PREFIX << " Default Constructor" << std::endl;
};

Cat	&Cat::operator=(const Cat &rhs)
{
	_type = rhs._type;
	if (rhs._brain)
		_brain = new Brain(*rhs._brain);
	std::cout << CAT_LOG_PREFIX << " Assignment Operator Called" << std::endl;
	return (*this);
}

Cat::Cat(const Cat &cat): Animal(cat) {
	_brain = NULL;
	*this = cat;
	std::cout << CAT_LOG_PREFIX << " Copy Constructor" << std::endl;
}

Cat::~Cat(void) {
	delete _brain;
	std::cout << CAT_LOG_PREFIX << " Adeus :(" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << CAT_LOG_PREFIX << " meow!" << std::endl;
}
