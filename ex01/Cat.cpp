/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:50:07 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/30 04:50:20 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*src.brain);
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &src)
	{
		delete this->brain;
		this->brain = new Brain(*src.brain);
		Animal::operator=(src);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}
