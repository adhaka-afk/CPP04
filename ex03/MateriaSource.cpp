/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:50:22 by adhaka            #+#    #+#             */
/*   Updated: 2025/12/02 06:23:40 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        materias[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
    for (int i = 0; i < 4; i++)
        materias[i] = src.materias[i] ? src.materias[i]->clone() : nullptr;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src) {
    if (this != &src) {
        for (int i = 0; i < 4; i++) {
            delete materias[i];
            materias[i] = src.materias[i] ? src.materias[i]->clone() : nullptr;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        delete materias[i];
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m) return;
    for (int i = 0; i < 4; i++) {
        if (!materias[i]) {
            materias[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] && materias[i]->getType() == type)
            return materias[i]->clone();
    }
    return nullptr;
}