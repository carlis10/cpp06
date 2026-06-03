/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:59:25 by carlos            #+#    #+#             */
/*   Updated: 2026/05/08 14:21:48 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter &copy)
{
	(void) copy;
}

ScalarConverter::~ScalarConverter()
{

}
ScalarConverter &ScalarConverter::operator=(ScalarConverter &copy)
{
	return copy;
}

bool isNumber(std::string value)
{
	bool point = false;
	for (size_t i = 0; i < value.length(); i++)
    {
		if (i == 0 && value[i] == '-')
			i++;
        if (value[i] == '.')
        {
            if (point)
                return false;
            point = true;
            if (i + 1 >= value.length() || !isdigit(value[i + 1]))
                return false;
        }
        else if (value[i] == 'f')
        {
            if (i != value.length() - 1)
                return false;
        }
        else if (!isdigit(value[i]))
            return false;
    }
    return true;
}

bool isDef(std::string value)
{
	if (value.compare("inf") == 0)
	{
		std::cout << "char : " << "impossible" << std::endl;
		std::cout << "int : " << "inf" << std::endl;
		std::cout << "float : " << "inff" << std::endl;
		std::cout << "double : " << "inf" << std::endl;
		return false;
	}
	else if (value.compare("-inf") == 0)
	{
		std::cout << "char : " << "impossible" << std::endl;
		std::cout << "int : " << "-inf" << std::endl;
		std::cout << "float : " << "-inff" << std::endl;
		std::cout << "double : " << "-inf" << std::endl;
		return false;
	}
	else if (!isNumber(value))
	{
		std::cout << "char : " << "impossible" << std::endl;
		std::cout << "int : " << "impossible" << std::endl;
		std::cout << "float : " << "nonf" << std::endl;
		std::cout << "double : " << "non" << std::endl;
		return false;
	}
	return true;
}

void print_char(double value)
{
	std::cout << "char : ";
	if (value != std::floor(value))
        std::cout << "impossible" << std::endl;
	else if (value == 127 || (value >= 0 && value <= 31))
		std::cout << "Non displayable" << std::endl;
	else if (value < 0 || value > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		char c = value;
		std::cout << c << std::endl;
	}

}

void print_int(double value)
{
	int number = value;
	std::cout << "int : " << number << std::endl;
}

void print_float(double value)
{
	float number = value;
	std::cout << std::fixed << "float : " << number << "f" << std::endl;
}

void print_double(double value)
{
	std::cout << std::fixed << "double : " << value  << std::endl;
}

void ScalarConverter::convert(std::string value)
{
	if (value.length() == 1)
	{
		const char *str = value.c_str();
		char c = str[0];
		std::cout << "char : " << c << std::endl;
		int n = c + '0';
		std::cout << "int : " << n << std::endl;
		float f = c + '0';
		std::cout << std::fixed << "float : " << f << "f" << std::endl;
		std::cout << "double : " << f << std::endl;
	}
	else if (isDef(value))
	{
		double number = atof(value.c_str());
		print_char(number);
		print_int(number);
		print_float(number);
		print_double(number);
	}
}