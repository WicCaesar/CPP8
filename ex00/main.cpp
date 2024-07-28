/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:29:38 by cnascime          #+#    #+#             */
/*   Updated: 2024/07/27 05:45:39 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
// #include <map> // A map is an associative container that contains a sorted set of key-value pairs.
#include <set> // A set is an associative container that contains a sorted set of unique objects of type Key.
#include <list> // A list is a sequence container (as others below) that allows non-contiguous memory allocation.
// #include <forward_list> // A forward_list is like a list, but it does not point to the previous element.
// #include <queue> // A queue is a container adaptor that provides a FIFO system.
#include <deque> // A double-ended queue (deque) is an indexed sequence container that allows fast insertion and deletion at both its beginning and its end.
#include <vector> // A vector encapsulates dynamic size arrays. It's the most used container in C++.

int	main(void) {
	std::set<int>				set;
	std::list<int>				list;
	std::deque<int>				deque;
	std::vector<int>			vector;

	int	lost[] = {4, 8, 15, 16, 23, 42};
	for (int i = 0; i < 6; i++) {
		set.insert(lost[i]);
		list.push_back(lost[i]);
		deque.push_back(lost[i]);
		vector.push_back(lost[i]);
	};
	/*
	std::cout << "Set: ";
	for (std::set<int>::iterator iter = set.begin(); iter != set.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;
	std::cout << "List: ";
	for (std::list<int>::iterator iter = list.begin(); iter != list.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;
	std::cout << "Deque: ";
	for (std::deque<int>::iterator iter = deque.begin(); iter != deque.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;
	std::cout << "Vector: ";
	for (std::vector<int>::iterator iter = vector.begin(); iter != vector.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;
	*/
	
	// Searches for the first occurrence of a given value in each container.
	// No easyfind in maps, forward lists, arrays and queues prior to C++11.
	try {
		std::cout << "Set: " << *easyfind(set, 8) << std::endl;
	} catch (std::exception &e) {
		std::cout << "Elemento não encontrado." << std::endl;
	};

	try {
		std::cout << "List: " << *easyfind(list, 16) << std::endl;
	} catch (std::exception &e) {
		std::cout << "Elemento não encontrado." << std::endl;
	};

	try {
		std::cout << "Deque: " << *easyfind(deque, 23) << std::endl;
	} catch (std::exception &e) {
		std::cout << "Elemento não encontrado." << std::endl;
	};

	try {
		std::cout << "Vector: " << *easyfind(vector, 108) << std::endl;
	} catch (std::exception &e) {
		std::cout << "Elemento não encontrado." << std::endl;
	};
};
