/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:06:55 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/05 23:56:04 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public:
		// Construction with no parameter: Creates an empty array
		Array()
		{
			_n = 0;
			_t = new T[1];
			_t[0] = 0;
		}

		// Creates an array of n elements initialized by default
		Array(unsigned int n): _n(n)
		{
			_t = new T[n];
		}

		// Construction by copy and assignment operator
		Array(const Array &copy) : _n(copy.size())
		{
			T	*copy_t = copy.getT();
			_t = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				_t[i] = copy_t[i];
		}

		// Destructor
		~Array()
		{
			delete [] this->_t;
		}

		// Assigment operator
		Array &operator=(const Array &copy)
		{
			T	*copy_t = copy.getT();
			this->_n = copy.size();
			delete [] this->_t;
			this->_t = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				_t[i] = copy_t[i];
			return (*this);
		}

		// the subscript operator: [ ]
		T	& operator[](int i)
		{
			if (i < 0 || i >= static_cast<int>(this->_n))
			{
				throw (std::exception());
			}
			else
				return (*(_t + i));
		}
		
		// Getters:
		T	*getT() const
		{
			return(_t);
		}

		unsigned int	size() const
		{
			return (_n);
		}
	
	private:
		T	*_t;
		unsigned int	_n;
};

template <typename T>
std::ostream &operator<<(std::ostream &str, Array<T> const &copy)
{
	for (unsigned int i = 0; i < copy.size(); i++)
		std::cout << "T[" << i << "]: " << (copy.getT())[i] << std::endl;
	return (str);
}

#endif