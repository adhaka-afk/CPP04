/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:46:45 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/30 05:58:55 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// Test Animal, Dog, and Cat
	const Animal *animals[3];
	animals[0] = new Animal();
	animals[1] = new Dog();
	animals[2] = new Cat();
	for (int i = 0; i < 3; ++i)
	{
		std::cout << "Animal " << i << " is a " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}
	// Test WrongAnimal and WrongCat
	const WrongAnimal *wrongAnimals[2];
	wrongAnimals[0] = new WrongAnimal();
	wrongAnimals[1] = new WrongCat();
	for (int i = 0; i < 2; ++i)
	{
		std::cout << "WrongAnimal " << i << " is a " << wrongAnimals[i]->getType() << std::endl;
		wrongAnimals[i]->makeSound();
	}
	// Test copy constructor and copy assignment operator
	Dog dog;
	Dog dogCopy(dog);
	Dog dogAssigned = dog;
	std::cout << "dog is a " << dog.getType() << std::endl;
	std::cout << "dogCopy is a " << dogCopy.getType() << std::endl;
	std::cout << "dogAssigned is a " << dogAssigned.getType() << std::endl;
	// Clean up
	for (int i = 0; i < 3; ++i)
	{
		delete animals[i];
	}
	for (int i = 0; i < 2; ++i)
	{
		delete wrongAnimals[i];
	}
	return 0;
}
