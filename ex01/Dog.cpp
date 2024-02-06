/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:50:12 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/30 04:37:12 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
	type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*src.brain);
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &src)
	{
		delete this->brain;
		this->brain = new Brain(*src.brain);
		Animal::operator=(src);
	}
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}
