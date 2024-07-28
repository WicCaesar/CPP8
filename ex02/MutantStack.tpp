/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:32:31 by cnascime          #+#    #+#             */
/*   Updated: 2024/07/28 08:20:41 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T, typename U>
MutantStack<T, U>::MutantStack(void) : std::stack<T, U>() {
};

template <typename T, typename U>
MutantStack<T, U>::MutantStack(const MutantStack<T, U> &copy) : std::stack<T, U>(copy) {
};

// 
template <typename T, typename U>
MutantStack<T, U>	&MutantStack<T, U>::operator=(const MutantStack<T, U> &copy) {
	if (this != &copy)
		this->U = copy.c; // c is a protected member object of the stack class,
	// stands for container. U is its type, which is deque by default.
	return (*this);
};

template <typename T, typename U>
MutantStack<T, U>::~MutantStack(void) {
};

template <typename T, typename U>
typename MutantStack<T, U>::iterator	MutantStack<T, U>::begin(void) {
	return (this->c.begin());
};

template <typename T, typename U>
typename MutantStack<T, U>::iterator	MutantStack<T, U>::end(void) {
	return (this->c.end());
};

template <typename T, typename U>
typename MutantStack<T, U>::reviterator	MutantStack<T, U>::revbegin(void) {
	return (this->c.rbegin());
};

template <typename T, typename U>
typename MutantStack<T, U>::reviterator	MutantStack<T, U>::revend(void) {
	return (this->c.rend());
};

#endif
