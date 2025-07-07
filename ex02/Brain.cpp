/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:12:40 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/07 15:53:41 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << BRAIN_LOG_PREFIX << " Default Constructor" << std::endl;
};

Brain	&Brain::operator=(const Brain &rhs)
{
	for (int i = 0; i < 100; i++)
		setIdea(i, rhs.getIdea(i));
	std::cout << BRAIN_LOG_PREFIX << " Assignment Operator Called" << std::endl;
	return (*this);
}

Brain::Brain(const Brain &brain) {
	*this = brain;
	std::cout << BRAIN_LOG_PREFIX << " Copy Constructor" << std::endl;
}

Brain::~Brain(void) {
	std::cout << BRAIN_LOG_PREFIX << " Adeus :(" << std::endl;
}

std::string		Brain::getIdea(int index) const {
	if (index >= 100 || index < 0) {
		throw std::out_of_range("Index out of range");
	}
	return (_ideas[index]);
}

void	Brain::setIdea(int index, std::string idea) {
	if (index >= 100 || index < 0) {
		throw std::out_of_range("Index out of range");
	}
	_ideas[index] = idea;
	std::cout << BRAIN_LOG_PREFIX << " Assigned idea " << index << std::endl;
}
