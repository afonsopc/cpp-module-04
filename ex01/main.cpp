/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:21:20 by afpachec          #+#    #+#             */
/*   Updated: 2025/07/07 13:35:46 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	// muh tests
	Animal	animal1;
	Animal	animal2("joaov");
	Animal	animal3(animal2);
	animal1.makeSound();
	animal2.makeSound();
	animal3.makeSound();
	Dog		dog1;
	Dog		dog2(dog1);
	dog1.makeSound();
	dog2.makeSound();
	Cat		cat1;
	Cat		cat2(cat1);
	cat1.makeSound();
	cat2.makeSound();
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();
	delete wrongAnimal;
	delete wrongCat;
}
