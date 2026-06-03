/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:36:52 by carlos            #+#    #+#             */
/*   Updated: 2026/05/27 13:44:20 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	t_data data;

	data.c = 'a';
	data.n = 2;
	std::cout << "char: " << data.c << std::endl;
	std::cout << "int: " << data.n << std::endl;
	uintptr_t n = Serializer::serializer(&data);
	std::cout << "unsigned int: " << n << std::endl;
	t_data *newdata = Serializer::unserializer(n);
		std::cout << "new char: " << newdata->c << std::endl;
	std::cout << "new int: " << newdata->n << std::endl;

	return 0;
}
