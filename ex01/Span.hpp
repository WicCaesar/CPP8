/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:30:49 by cnascime          #+#    #+#             */
/*   Updated: 2024/07/28 05:03:51 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

class Span {
	private:
		unsigned int		N_;
		std::vector<int>	storage_;

	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span(void);

		void	addNumber(unsigned int element);
		void	addRange(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
		int		shortestSpan(void);
		int		longestSpan(void);
		

		class overflowException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Não há espaço para armazenamento.");
				};
		};

		class notEnoughElementsException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Não há a quantidade mínima de elementos.");
				};
		};
};
