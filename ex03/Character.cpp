/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:50:01 by adhaka            #+#    #+#             */
/*   Updated: 2025/12/02 09:57:17 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : name(name) 
{
	std::cout << "Character [" << this->name << "] created" << std::endl; 
	for (int i = 0; i < 4; ++i) 
	{
		this->inventory[i] = nullptr;
	}
}

Character::Character(const Character &src) : name(src.name) 
{
	std::cout << "Character copy constructor called" << std::endl; 
	for (int i = 0; i < 4; ++i) 
	{
		if (src.inventory[i]) 
		{
			this->inventory[i] = src.inventory[i]->clone();
		} 
		else 
		{
			this->inventory[i] = nullptr;
		}
	}
}


Character& Character::operator=(const Character &src) 
{
	std::cout << "Character copy assignment operator called" << std::endl;  
	if (this != &src) 
	{
		this->name = src.name;
		for (int i = 0; i < 4; ++i) 
		{
			delete this->inventory[i];
			if (src.inventory[i]) 
			{
				this->inventory[i] = src.inventory[i]->clone();
			} 
			else 
			{
				this->inventory[i] = nullptr;
			}
		}
	}
	return *this;
}

std::string const & Character::getName() const 
{
	return this->name;
}

void Character::equip(AMateria* m) 
{
	if (!m) 
	{
		std::cout << "Cannot equip a null materia." << std::endl;
		return;
	}
	for (int i = 0; i < 4; ++i) 
	{
		if (!this->inventory[i]) 
		{
			this->inventory[i] = m;
			std::cout << "Equipped [" << m->getType() << "] materia in slot " << i << "." << std::endl; 
			return;
		}
	}
	std::cout << "Inventory full. Cannot equip more materia." << std::endl;
}

void Character::unequip(int idx) 
{
	if (idx < 0 || idx >= 4) 
	{
		std::cout << "Invalid index. Must be between 0 and 3." << std::endl;
		return;
	}
	if (this->inventory[idx]) 
	{
		std::cout << "Unequipped [" << this->inventory[idx]->getType() << "] materia from slot " << idx << "." << std::endl;
		this->inventory[idx] = nullptr;
	} 
	else 
	{
		std::cout << "No materia to unequip in slot " << idx << "." << std::endl;
	}
}


void Character::use(int idx, ICharacter& target) 
{
	if (idx < 0 || idx >= 4) 
	{
		std::cout << "Invalid index. Must be between 0 and 3." << std::endl;
		return;
	}
	if (this->inventory[idx]) 
	{
		this->inventory[idx]->use(target);
	} 
	else 
	{
		std::cout << "No materia in slot " << idx << " to use." << std::endl;
	}
}

Character::~Character() 
{
	std::cout << "Character [" << this->name << "] destroyed" << std::endl; 
	for (int i = 0; i < 4; ++i) 
	{
		delete this->inventory[i];
	}
}
