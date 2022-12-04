/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:31:07 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/07 22:17:31 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iomanip>
#include <stack>

template <typename T>
class	MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		virtual ~MutantStack();
		MutantStack(const MutantStack &mutantStack);
		MutantStack&	operator= (const MutantStack &mutantStack);
	
	public:
		class	Iterator
		{
			private :
				T	*ptr;
			public :
				Iterator();
				Iterator(T *ptr);
				Iterator(const T *ptr);
				Iterator(const Iterator &it);

				Iterator&	operator=(const Iterator &it);
				bool		operator==(const Iterator &it);
				bool		operator!=(const Iterator &it);
				T&			operator*();
				Iterator&	operator++();
				Iterator&	operator--();
				Iterator	operator++(int);
				Iterator	operator--(int);
		};

	public:
		Iterator	begin() const;
		Iterator	end() const;
};

template <typename T>
std::ostream&	operator<<(std::ostream &out, const MutantStack<T> &mutantStack);

#endif
