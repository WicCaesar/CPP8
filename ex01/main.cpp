/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:30:36 by cnascime          #+#    #+#             */
/*   Updated: 2024/07/28 05:39:08 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span	sp(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl << std::endl;

	Span				biggus(23232);
	std::vector<int>	dickus(23232);

	for (int i = 0; i < 23232; ++i)
		dickus[i] = (i * 3);
	biggus.addRange(dickus.begin(), dickus.end());
	std::cout << biggus.shortestSpan() << std::endl;
	std::cout << biggus.longestSpan() << std::endl << std::endl;

	try {
		Span	lost(6);

		lost.addNumber(4);
		lost.addNumber(8);
		lost.addNumber(15);
		lost.addNumber(16);
		lost.addNumber(23);
		lost.addNumber(42);
		lost.addNumber(108);
		std::cout << lost.shortestSpan() << std::endl;
		std::cout << lost.longestSpan() << std::endl << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	};

	try {
		Span	shorty(2);

		shorty.addNumber(42);
		std::cout << shorty.shortestSpan() << std::endl;
		std::cout << shorty.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	};

	return (0);
};
