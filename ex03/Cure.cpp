/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:50:07 by adhaka            #+#    #+#             */
/*   Updated: 2025/12/02 09:57:35 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") 
{
    std::cout << "Cure constructor called" << std::endl; 
}

Cure::Cure(const Cure &src) : AMateria(src) 
{
    std::cout << "Cure copy constructor called" << std::endl; 
}

Cure& Cure::operator=(const Cure &src) 
{
    if (this != &src) {
        AMateria::operator=(src);
    }
    return *this;
}

Cure::~Cure() 
{
    std::cout << "Cure destructor called" << std::endl; 
}

AMateria* Cure::clone() const 
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target) 
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}