/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:50:12 by adhaka            #+#    #+#             */
/*   Updated: 2025/12/02 09:57:44 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") 
{
    std::cout << "Ice constructor called" << std::endl;  
}

Ice::Ice(const Ice &src) : AMateria(src) 
{
    std::cout << "Ice copy constructor called" << std::endl; 
}

Ice& Ice::operator=(const Ice &src) 
{
    if (this != &src) {
        AMateria::operator=(src);
    }
    return *this;
}

Ice::~Ice() {
    std::cout << "Ice destructor called" << std::endl; 
}

AMateria* Ice::clone() const 
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target) 
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}