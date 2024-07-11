/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:44:05 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/11 17:28:03 by gprada-t         ###   ########.fr       */
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
	if (contact.isEmpty())
	{
		std::cout << "Contact field/s empty" << std::endl;
		return ;
	}
	contacts[index] = contact;
	index = (index + 1) % 8;
	if (contactCount < 8)
		contactCount++;
}

void	PhoneBook::searchContact(int index) const
{
	if (index < 0 || index >= contactCount)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	printContact(contacts[index]);
}

void	PhoneBook::printContact(const Contact& contact) const
{
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

void	PhoneBook::displayField(std::string field) const
{
	for (size_t i = 0; i < 10; i++)
	{
		if (field.size() >= 10)
		{
			if (i == 9)
				std::cout << ".";
			else
				std::cout << field[i];
		}
		else 
		{
			if (i < field.size())
				std::cout << field[i];
			else
				std::cout << " ";
		}
	}
	std::cout << "|";
}

void	PhoneBook::displayContacts() const
{
	displayField("INDEX");
	displayField("FIRST NAME");
	displayField("LAST NAME");
	displayField("NICKNAME");
	std::cout << std::endl;
	for (int i = 0; i <= index; i++)
	{
		displayField(contacts[i].getFirstName());
		std::cout << std::endl;
	}
}
