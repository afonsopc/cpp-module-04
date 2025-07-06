/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:23:44 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/06 21:56:35 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

# define ANIMAL_LOG_PREFIX "\033[1;34m[ANIMAL]\033[0m"

class Animal {
	protected:
		std::string	_type;
	public:
						Animal(void);
						Animal(std::string type);
						Animal(const Animal &other);
						~Animal(void);
		Animal			&operator=(const Animal &other);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
