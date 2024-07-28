/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 02:25:17 by cnascime          #+#    #+#             */
/*   Updated: 2024/07/28 05:46:36 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// The reserve function allocates memory for a vector, specifying the number of
// elements it should be able to contain. The size of the vector can be changed.
Span::Span(void) {
	storage_.reserve(0);
};

Span::Span(unsigned int N) {
	storage_.reserve(N);
};

// The capacity function returns the number of elements that the vector could
// contain without having to allocate more memory.
Span::Span(const Span &copy) {
	storage_.reserve(copy.storage_.capacity());
	storage_ = copy.storage_;
};

Span &Span::operator=(const Span &copy) {
	if (this != &copy) {
		storage_.clear();
		storage_.reserve(copy.storage_.capacity());
		storage_ = copy.storage_;
	}
	return (*this);
};

Span::~Span(void) {
};

// The push_back function adds an element to the end of the vector. However,
// to find the smallest and the longest spans among all stored numbers, I need
// to sort them all in ascending order.
void	Span::addNumber(unsigned int element) {
	if (storage_.size() == storage_.capacity())
		throw Span::overflowException();
	storage_.push_back(element);
	std::sort(storage_.begin(), storage_.end());
};

// Adds multiple elements to the vector instead of one at a time.
void	Span::addRange(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end) {
	if (this->storage_.size() + std::distance(begin, end) > this->storage_.capacity())
		throw Span::overflowException();
	storage_.insert(this->storage_.end(), begin, end);
	std::sort(storage_.begin(), storage_.end());
}

int	Span::shortestSpan(void) {
	if (storage_.size() <= 1)
		throw Span::notEnoughElementsException();

	int	shortest = storage_[1] - storage_[0];
	for (std::vector<int>::iterator iter = storage_.begin(); iter != storage_.end() - 1; iter++) {
		int difference = *(iter + 1) - *iter;
		if (shortest > difference)
			shortest = difference;
	};
	return (shortest);
};

int	Span::longestSpan(void) {
	if (storage_.size() <= 1)
		throw Span::notEnoughElementsException();

	int	longest = storage_.back() - storage_.front();
	return (longest);
};
