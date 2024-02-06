/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:49:59 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/30 05:29:17 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &src);
		virtual ~AAnimal();
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif
