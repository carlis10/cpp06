/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:59:43 by carlos            #+#    #+#             */
/*   Updated: 2026/05/08 12:09:41 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP
# include <string>
# include <iostream>
# include <cmath>

class ScalarConverter
{
private:
	
public:
	ScalarConverter();
	ScalarConverter(ScalarConverter &copy);
	~ScalarConverter();
	ScalarConverter &operator=(ScalarConverter &copy);
	static void convert(std::string value);
};


#endif