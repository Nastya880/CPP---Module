/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:38:27 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/04 21:56:31 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

class	Base
{
	public:
		virtual ~Base()
		{
		}
};

class	A: public Base
{
};

class	B: public Base
{
};

class	C: public Base
{
};

Base*	generate()
{
	srand(time(NULL));

	int	rand_value = rand() % 3;
	if (rand_value == 0)
	{
		std::cout << "A class object create" << std::endl;
		return (new A);
	}
	else if (rand_value == 1)
	{
		std::cout << "B class object create " << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "C class object create" << std::endl;
		return (new C);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "pointer A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "pointer B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "pointer C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A& ref_a = dynamic_cast<A&>(p);
		static_cast<void>(ref_a);
		std::cout << "reference A" << std::endl;
	}
	catch (const std::exception &exception)
	{
		static_cast<void>(exception);
		//std::cout << "not definetely A" << std::endl;
	}

	try
	{
		B& ref_b = dynamic_cast<B&>(p);
		static_cast<void>(ref_b);
		std::cout << "reference B" << std::endl;
	}
	catch (const std::exception &exception)
	{
		//std::cout << "not definetely B" << std::endl;
		static_cast<void>(exception);
	}

	try
	{
		C& ref_c = dynamic_cast<C&>(p);
		static_cast<void>(ref_c);
		std::cout << "reference C" << std::endl;
	}
	catch (const std::exception &exception)
	{
		//std::cout << "not definetely C" << std::endl;
		static_cast<void>(exception);
	}
}

int	main()
{
	for (int i = 0; i < 7; i++)
	{
		Base *ptr = generate();

		identify(ptr);
		identify(*ptr);

		delete ptr;
		sleep(1);
	}

	return (0);
}