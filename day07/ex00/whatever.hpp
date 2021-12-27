/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreynold <mreynold@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:33:52 by mreynold          #+#    #+#             */
/*   Updated: 2021/12/27 23:34:26 by mreynold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template<class T>
void swap(T& a, T& b){
	T buf;

	buf = a;
	a = b;
	b = buf;
}

template<typename T>
T min(T a , T b){
	if (a < b)
		return (a);
	return(b);
}

template<typename T>
T max(T a , T b){
	if (a > b)
		return (a);
	return(b);
}

#endif
