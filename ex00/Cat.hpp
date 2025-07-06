/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:23:44 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/06 21:57:03 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

# define CAT_LOG_PREFIX "\033[1;33m[CAT]\033[0m"

class Cat: public Animal {
	public:
						Cat(void);
						Cat(const Cat &other);
						~Cat(void);
		Cat				&operator=(const Cat &other);
		virtual void	makeSound(void) const;
};

#endif
