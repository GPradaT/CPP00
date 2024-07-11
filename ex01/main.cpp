/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:44:00 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/11 18:33:42 by gprada-t         ###   ########.fr       */
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
		std::string	command;
		while (command != "EXIT")
		{
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
				phoneBook.addContact(contact);
			}
			else if (command == "SEARCH")
			{
				phoneBook.displayContacts();
				std::string	index;
				std::cout << "Put index for more info: ";
				std::cin >> index;
				std::cout << index << std::endl;
				if (index.size() < 2)
					phoneBook.searchContact(std::atod(index));
			}
		}
	}
	return 0;
}
