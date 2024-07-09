/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:44:05 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/09 18:46:09 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	contactCount = 0;
	index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact(Contact& contact)
{
	contacts[index] = contact;
	index = (index + 1) % 8;
	if (contactCount < 8)
		contactCount++;
}
