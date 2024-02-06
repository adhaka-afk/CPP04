/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:50:01 by adhaka            #+#    #+#             */
/*   Updated: 2024/01/30 04:13:32 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int a = 0; a < 100; ++a)
	{
		ideas[a] = src.ideas[a];
	}
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &src)
	{
		for (int b = 0; b < 100; ++b)
		{
			ideas[b] = src.ideas[b];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
