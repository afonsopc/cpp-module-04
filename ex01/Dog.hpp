/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:23:44 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/07 13:02:09 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define DOG_LOG_PREFIX "\033[1;32m[DOG]\033[0m"

class Dog: public Animal {
	private:
		Brain			*_brain;
	public:
						Dog(void);
						Dog(const Dog &other);
						~Dog(void);
		Dog				&operator=(const Dog &other);
		virtual void	makeSound(void) const;
};

#endif
