/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:23:44 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/07 16:28:02 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <string>
# include <iostream>

# define WRONG_ANIMAL_LOG_PREFIX "\033[1;34m[WRONG_ANIMAL]\033[0m"

class WrongAnimal {
	protected:
		std::string	_type;
	public:
						WrongAnimal(void);
						WrongAnimal(std::string type);
						WrongAnimal(const WrongAnimal &other);
		virtual			~WrongAnimal(void);
		WrongAnimal			&operator=(const WrongAnimal &other);
		void			makeSound(void) const;
		std::string		getType(void) const;
};

#endif
