/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:49:59 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/30 05:48:43 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
};

#endif
