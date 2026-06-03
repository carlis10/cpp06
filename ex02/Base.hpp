/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:58:15 by carlos            #+#    #+#             */
/*   Updated: 2026/05/27 14:23:51 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
 #define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

 class Base
 {
 public:
	virtual ~Base();
 };
 
 Base *generator();
 void identify(Base *p);
 void identify(Base &p);

#endif