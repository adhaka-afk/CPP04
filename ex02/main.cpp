/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:50:18 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/30 05:41:18 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	/*uncomment for abstract check*/

	// const AAnimal c;
	const AAnimal *b = new Dog();
	const AAnimal *a = new Cat();

	// Test for deep copying
	const AAnimal *copyOfB = new Dog(*(Dog*)b);
	const AAnimal *copyOfA = new Cat(*(Cat*)a);

	delete b;
	delete a;
	delete copyOfB;
	delete copyOfA;

	AAnimal *AAnimalArray[4];
	AAnimalArray[0] = new Dog();
	AAnimalArray[1] = new Cat();
	AAnimalArray[2] = new Dog();
	AAnimalArray[3] = new Cat();

	for (int i = 0; i < 4; ++i)
	{
		AAnimalArray[i]->makeSound();
		delete AAnimalArray[i];
	}

	return 0;
}
