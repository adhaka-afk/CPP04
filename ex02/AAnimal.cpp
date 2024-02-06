/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:49:55 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/30 05:09:03 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) : type(src.type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this != &src)
	{
		type = src.type;
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimals yapping" << std::endl;
}

std::string AAnimal::getType() const
{
	return type;
}
