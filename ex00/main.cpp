/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:40:11 by carlos            #+#    #+#             */
/*   Updated: 2026/05/08 14:24:04 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <limits>

int main(int argc, char **argv)
{
	if (argc != 2)
		return -1;
	ScalarConverter converter;
	converter.convert(argv[1]);
}