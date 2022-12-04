/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:31:11 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/07 22:16:57 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.tpp"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <list>

int	main()
{
	MutantStack<int> ms;
	
	srand(time(NULL));
	for (std::size_t i = 0; i < 10; i++)
		ms.push(rand() % 100 + 1);
	std::cout << ms;
	std::cout << "top element: " << ms.top() << std::endl;
	ms.pop();
	ms.pop();
	std::cout << ms;
	std::cout << "top element after pop 2 elements: " << ms.top() << std::endl;

	MutantStack<int>::Iterator it = ms.begin();
	MutantStack<int>::Iterator ite = ms.end();
	++it;
	--it;
	std::cout << "tStack with help iterators: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "test for list: " << std::endl;

	std::list<int> List;
	for (std::size_t i = 0; i < 10; i++)
		List.push_back(rand() % 100 + 1);
	for (std::list<int>::iterator it = List.begin(); it != List.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "top element: " << List.front() << std::endl;
	List.pop_front();
	List.pop_front();
	for (std::list<int>::iterator it = List.begin(); it != List.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "top element after pop 2 elements: " << List.front() << std::endl;

	return (0);
}
