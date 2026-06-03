/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:09:36 by carlos            #+#    #+#             */
/*   Updated: 2026/05/27 16:05:33 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generator()
{
	srand(time(0));

    int opcion = rand() % 3;

    switch(opcion)
	{
        case 0:
            return new A;
        case 1:
            return new B;
        case 2:
            return new C;
    }
	return 0;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Es la clase 'A'" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "Es la clase 'B'" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "Es la clase 'C'" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Es la clase 'A'" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Es la clase 'B'" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Es la clase 'C'" << std::endl;
	}
	catch(const std::exception& e){}
}

Base::~Base(){}