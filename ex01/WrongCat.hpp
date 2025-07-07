/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:23:44 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/07 15:58:06 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

# define WRONG_CAT_LOG_PREFIX "\033[1;33m[WRONG_CAT]\033[0m"

class WrongCat: public WrongAnimal {
	public:
						WrongCat(void);
						WrongCat(const WrongCat &other);
						~WrongCat(void);
		WrongCat				&operator=(const WrongCat &other);
		virtual void	makeSound(void) const;
};

#endif
