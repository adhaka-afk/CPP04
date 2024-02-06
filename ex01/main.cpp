/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:50:18 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/30 04:50:49 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *b = new Dog();
	const Animal *a = new Cat();

	// Test for deep copying
	const Animal *copyOfB = new Dog(*(Dog*)b);
	const Animal *copyOfA = new Cat(*(Cat*)a);

	delete b;
	delete a;
	delete copyOfB;
	delete copyOfA;

	Animal *animalArray[4];
	animalArray[0] = new Dog();
	animalArray[1] = new Cat();
	animalArray[2] = new Dog();
	animalArray[3] = new Cat();

	for (int i = 0; i < 4; ++i)
	{
		animalArray[i]->makeSound();
		delete animalArray[i];
	}

	return 0;
}
