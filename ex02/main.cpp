/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:31:47 by cnascime          #+#    #+#             */
/*   Updated: 2024/07/28 09:50:36 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"

// Adds two elements to a stack, pops (removes) the top element, displays size.
// Adds other elements and moves the pointer forward and backwards.
// Iterates through each element and creates a copy of the stack.
int	main(void) {
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	};
	std::stack<int>	s(mstack);

	std::cout << std::endl;

	/* LIST */
	std::list<int>	list;
	list.push_back(5);
	list.push_back(17);
	std::cout << list.back() << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;

	/* VECTOR */
	std::vector<int>	vector;
	vector.push_back(5);
	vector.push_back(3);
	vector.push_back(5);
	vector.push_back(737);
	vector.push_back(0);
	std::vector<int>::iterator	vit = vector.begin();
	++vit;
	--vit;
	std::cout << *vit << std::endl;

	/* DEQUE */
	std::deque<int>	deque;
	deque.push_back(3);
	deque.push_back(5);
	deque.push_back(737);
	deque.push_back(0);
	std::deque<int>	d(deque);
	std::deque<int>::iterator	dit = d.begin();
	std::deque<int>::iterator	dite = d.end();
	++dit;
	--dit;
	while (dit != dite) {
		std::cout << *dit << std::endl;
		++dit;
	};

	std::cout << std::endl;

	std::list<int>	lost;
	lost.push_back(4);
	lost.push_back(8);
	lost.push_back(15);
	lost.push_back(16);
	lost.push_back(23);
	lost.push_back(42);
	MutantStack<int, std::list<int> >	dharma(lost);
	std::cout << dharma.size() << std::endl;

	std::cout << std::endl;

	std::deque<int>		dickus(3, 5);
	MutantStack<int>	arouse(dickus); // No container specified
	std::deque<int>::iterator	diter = arouse.begin();
	std::deque<int>::iterator	ditere = arouse.end();
	int fluff = 0;
	while (diter != ditere) {
		*diter = (*diter + fluff++) * 3;
		std::cout << *diter << std::endl;
		++diter;
	};

	std::cout << std::endl;

	MutantStack<int, std::vector<int> >	hopelessness; // Empty mutant stack
	std::cout << hopelessness.size() << std::endl;

	return (0);
};
