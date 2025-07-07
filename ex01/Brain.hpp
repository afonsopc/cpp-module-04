/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:23:44 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/07 15:52:50 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

# define BRAIN_LOG_PREFIX "\033[1;36m[BRAIN]\033[0m"

class Brain {
	private:
		std::string		_ideas[100];
	public:
						Brain(void);
						Brain(const Brain &other);
						~Brain(void);
		Brain			&operator=(const Brain &other);
		std::string		getIdea(int index) const;
		void			setIdea(int index, std::string idea);
};

#endif
