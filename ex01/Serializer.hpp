/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:38:31 by carlos            #+#    #+#             */
/*   Updated: 2026/05/27 13:53:47 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include <iostream>

typedef struct s_data
{
	char	c;
	int		n;
}      t_data;

class Serializer
{
private:
	Serializer();
	Serializer(Serializer &copy);
	Serializer &operator=(Serializer &copy);
	~Serializer();
public:
	static uintptr_t serializer(t_data *ptr);
  	static t_data *unserializer(uintptr_t raw);

};

#endif
