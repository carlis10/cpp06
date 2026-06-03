/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:42:53 by carlos            #+#    #+#             */
/*   Updated: 2026/05/27 13:41:49 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{

}

Serializer::Serializer(Serializer &copy)
{
	(void)copy;
}
Serializer::~Serializer()
{

}

Serializer &Serializer::operator=(Serializer &copy)
{
	return copy;
}

uintptr_t Serializer::serializer(t_data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

t_data *Serializer::unserializer(uintptr_t raw)
{
	return(reinterpret_cast<t_data*>(raw));
}