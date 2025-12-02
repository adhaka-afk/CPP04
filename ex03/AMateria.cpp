/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:49:55 by adhaka            #+#    #+#             */
/*   Updated: 2025/12/02 09:56:57 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("") 
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "AMateria of type [" << this->type << "] created" << std::endl;
}

AMateria::AMateria(const AMateria &src) : type(src.type)
{
	std::cout << "AMateria copy constructor called" << std::endl; 
}

AMateria& AMateria::operator=(const AMateria &src) 
{
	std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &src) 
	{
		this->type = src.type;
	}
	return *this;
}
AMateria::~AMateria()
{
    std::cout << "AMateria of type [" << this->type << "] destroyed" << std::endl;
}

void AMateria::use(ICharacter& target) 
{
    std::cout << "* AMateria of type [" << this->type 
              << "] is used on " << target.getName() << " *" << std::endl;
}


std::string const & AMateria::getType() const 
{
    return this->type;
}
