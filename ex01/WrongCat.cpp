/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:12:40 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/07 16:17:42 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("wrongCat") {
	std::cout << WRONG_CAT_LOG_PREFIX << " Default Constructor" << std::endl;
};

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	this->_type = rhs._type;
	std::cout << WRONG_CAT_LOG_PREFIX << " Assignment Operator Called" << std::endl;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &wrongCat): WrongAnimal(wrongCat) {
	*this = wrongCat;
	std::cout << WRONG_CAT_LOG_PREFIX << " Copy Constructor" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << WRONG_CAT_LOG_PREFIX << " Adeus :(" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << WRONG_CAT_LOG_PREFIX << " Wrong meow!" << std::endl;
}
