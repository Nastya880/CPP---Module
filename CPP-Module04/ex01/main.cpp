/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:21:10 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/31 10:59:30 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{

    const Animal *animals[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\nGET TYPE\n" << std::endl;
    std::cout << animals[0]->getType() << std::endl;
    std::cout << animals[5]->getType() << std::endl;
    
    std::cout << "\nADD BRAIN\n" << std::endl;
    Brain* brain = new Brain();
    brain = &animals[4]->getBrain();
    brain->setIdea("First idea!", 0);
    brain = &animals[6]->getBrain();
    brain->setIdea("Go walk", 1);
    std::cout << animals[4]->getBrain().getIdea(0) << std::endl;
    std::cout << animals[6]->getBrain().getIdea(1) << std::endl;

    std::cout << "\nDELETE\n" << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];

	std::cout << "\nDEEP COPY. COPY CONSTRUCTOR FOR DOG\n" << std::endl;
    Dog *dog = new Dog;
    Dog *dogCopy = new Dog(*dog);
    delete dog;
    delete dogCopy;

	std::cout << "\nDEEP COPY. COPY ASSIGNMENT OPERATOR FOR DOG\n" << std::endl;
    Dog *dog1 = new Dog;
    Dog *dogCopy1 = new Dog;
    *dog1 = *dogCopy1;
    delete dog1;
    delete dogCopy1;

	return (0);
}