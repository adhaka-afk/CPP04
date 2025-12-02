# CPP04


## Description:

This module focuses on subtype polymorphism, abstract classes, and interfaces in C++, aiming to deepen understanding of object-oriented programming principles.
## Overview:

The module consists of three exercises:

## Exercise 00:
- Polymorphism
   - Implements a base class called Animal with derived classes Dog and Cat.
   - Demonstrates polymorphism through virtual member functions.
   - Tests proper construction and destruction chaining.
## Exercise 01:
- I Don’t Want to Set the World on Fire
   - Extends the hierarchy with the addition of Brain class containing an array of 100 std::string.
   - Introduces deep copying and memory management testing.
## Exercise 02: 
- Abstract Class
   - Refactors the Animal class into an abstract class by making its constructor protected.
   - Prevents instantiation of the default Animal class directly.
   - Updates class hierarchy to maintain functionality.
## Exercise 03: 
- Materia System (Subtype Polymorphism & Interfaces)
- Introduces AMateria as an abstract base class representing magical abilities.
- Concrete Ice and Cure classes inherit from AMateria, each implementing clone() and use() functions.
- Defines the ICharacter interface with methods to equip, unequip, and use Materias.
- Implements Character class that can hold up to 4 Materias, supports deep copying, and safely manages memory.
- Defines the IMateriaSource interface for creating and learning Materias.
- Implements MateriaSource class, which stores learned Materias and can create new instances on demand.
- Demonstrates:
   - Deep copying of Materias and Characters.
   - Correct polymorphic behavior through interfaces.
   - Safe memory management to avoid leaks.
## Files Structure: 
- Each exercise is organized into its own directory (ex00, ex01, ex02).
- Header files (Animal.hpp, Brain.hpp, AAnimal.hpp) and source files (Animal.cpp, Brain.cpp, AAnimal.cpp) are segregated.
- The main.cpp file in each directory contains comprehensive test cases.
## Compilation and Execution:

1. Navigate to the Exercise Directory: Open a terminal and change to the directory of the exercise you want to run.
 ```bash
cd ex00  # Replace 'ex00' with the exercise directory you want to run
```
2. Compile the Code: Use the provided Makefile to compile the code.
 ```bash
make
```
3. Run the Executable: After successful compilation, run the generated executable.
```bash
./Ninstantiable  # Replace 'Ninstantiable' with the name of the executable for the exercise
```
4. Verify Output: Check the output in the terminal to verify the correctness of the program.
   
5. Clean Up (Optional): To clean up the compiled files, you can use the clean/fclean target in the Makefile.
 ```bash
make clean
```
or 
 ```bash
make fclean
```

## Exercise Specifics:

. Proper construction/destruction chaining between base and derived classes is demonstrated.

. Additional tests are included in the main.cpp files for each exercise.

## 🚀 Next Project

[Cub3D](https://github.com/adhaka-afk/cub3D)

## ⏳ Previous Project

[CPP03](https://github.com/adhaka-afk/CPP03)


