/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreynold <mreynold@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:34:01 by mreynold          #+#    #+#             */
/*   Updated: 2021/12/27 23:34:26 by mreynold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

template<typename T>
class Array{
private:
	T *arr;
	unsigned int n;

public:
	Array():arr(nullptr), n(0) {}
	Array(unsigned int n):n(n) { this->arr = new T[n](); }
	Array(Array const &copy):arr(nullptr) {
		*this = copy;
	}
	~Array(){ delete [] this->arr; }

	Array& operator = (Array const &ex){
		delete [] this->arr;
		this->arr = new T[ex.n]();
		this->n = ex.n;
		for (unsigned int i = 0; i < ex.n; i++)
			this->arr[i] = ex.arr[i];
		return (*this);
	}

	T& operator [] (unsigned int const index) {
		if ( index >= n )
			throw std::exception();
		return (this->arr[index]);
	}

	unsigned int size( void ) const {
		return (this->n);
	}
};

#endif
