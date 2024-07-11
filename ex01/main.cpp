/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:44:00 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/11 15:51:04 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"

int main(int argc, char **argv)
{

	if (argc > 1)
	{
		std::cout << "Usage: " << std::endl << argv[0] << std::endl;
		return (1);
	}
	else
	{
		PhoneBook	phoneBook;
		std::cout << "Welcome to the PhoneBook!" << std::endl;
		while (true)
		{
			std::string	command;
			std::cout << "Enter a command: ";
			std::cin >> command;
			if (command == "EXIT")
				return 0;
			else if (command == "ADD")
			{
				std::string	firstName;
				std::string	lastName;
				std::string	nickname;
				std::string	phoneNumber;
				std::string	darkestSecret;
				std::cout << "Enter first name: ";
				std::cin >> firstName;
				std::cout << "Enter last name: ";
				std::cin >> lastName;
				std::cout << "Enter nickname: ";
				std::cin >> nickname;
				std::cout << "Enter phone number: ";
				std::cin >> phoneNumber;
				std::cout << "Enter darkest secret: ";
				std::cin >> darkestSecret;
				Contact contact(firstName, lastName, nickname,\
								phoneNumber, darkestSecret);
				if (contact.isEmpty())
				{
					std::cout << "Contact field/s empty." << std::endl;
					continue ;
				}
				phoneBook.addContact(contact);
			}
			else if (command == "SEARCH")
			{
				phoneBook.displayContacts();
				int	index;
				std::cout << "Put index for more info: ";
				std::cin >> index;
				phoneBook.searchContact(index);
			}
		}
	}
	// Crear un contacto usando el constructor parametrizado
	Contact parametrizedContact("John", "Doe", "Johnny", "", "Afraid of spiders");
	std::cout << "Parametrized contact is empty: " << (parametrizedContact.isEmpty() ? "Yes" : "No") << std::endl;

	// Imprimir los detalles del contacto parametrizado
	std::cout << "First Name: " << parametrizedContact.getFirstName() << std::endl;
	std::cout << "Last Name: " << parametrizedContact.getLastName() << std::endl;
	std::cout << "Nickname: " << parametrizedContact.getNickname() << std::endl;
	std::cout << "Phone Number: " << parametrizedContact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << parametrizedContact.getDarkestSecret() << std::endl;

	return 0;
}
