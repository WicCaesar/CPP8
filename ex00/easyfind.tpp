/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:29:51 by cnascime          #+#    #+#             */
/*   Updated: 2024/07/26 11:38:57 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &container, int n) {
	typename T::iterator occurrence = std::find(container.begin(), container.end(), n);
	if (occurrence == container.end())
		throw std::exception();
	return (occurrence);
};

#endif
