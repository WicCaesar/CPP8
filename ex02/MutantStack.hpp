/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:32:18 by cnascime          #+#    #+#             */
/*   Updated: 2024/07/28 08:21:10 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <list>
#include <stack>
#include <deque>
#include <vector>
#include <iterator>

// In the implementation of stack (a container adaptor), it has a template class
// followed by a deque<T> sequence container. Stacks are LIFO data structures,
// and deques are double-ended queues, so they are a good fit for stacks.
// Vectors and lists also work, as they have all the necessary operations
// (empty, size, back, push_back, pop_back).
template <typename T, typename U = std::deque<T> >
class MutantStack : public std::stack<T, U> {
	public:
		MutantStack<T, U>(void);
		MutantStack<T, U>(const MutantStack<T, U> &copy);
		MutantStack<T, U>	&operator=(const MutantStack<T, U> &copy);
		explicit MutantStack<T, U>(const U &containerType) : std::stack<T, U>(containerType) {};
		// explicit keyword prevents implicit conversions, making code safer.
		// explicit functions can only be defined inside the class.
		~MutantStack<T, U>(void);

		typedef typename std::stack<T, U>::container_type::iterator	iterator;
		iterator	begin(void);
		iterator	end(void);
		typedef typename std::stack<T, U>::container_type::reverse_iterator	reviterator;
		reviterator	revbegin(void);
		reviterator	revend(void);
};

#endif
