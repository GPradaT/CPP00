/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:44:00 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/13 12:45:01 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{

	if (argc > 1)
	{
		std::cout << "Usage: " << std::endl << argv[0] << std::endl;
		return (1);
	}
	PhoneBook	phoneBook;
	std::cout << "Welcome to the PhoneBook!" << std::endl;
	std::string	command;
	while (true)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
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
			std::getline(std::cin, firstName);
			std::cout << "Enter last name: ";
			std::getline(std::cin, lastName);
			std::cout << "Enter nickname: ";
			std::getline(std::cin, nickname);
			std::cout << "Enter phone number: ";
			std::getline(std::cin, phoneNumber);
			std::cout << "Enter darkest secret: ";
			std::getline(std::cin, darkestSecret);
			Contact contact(firstName, lastName, nickname,\
							phoneNumber, darkestSecret);
			phoneBook.addContact(contact);
		}
		else if (command == "SEARCH")
		{
			phoneBook.displayContacts();
			std::string	index;
			std::cout << "Put index for more info: ";
			std::getline(std::cin, index);
			if (index.length() > 2 || !isdigit(index[0]))
				std::cout << "Invalid index." << std::endl;
			else
			{
				int	in = index[0] - '0';
				phoneBook.searchContact(in);
			}
		}
		else
			std::cout << "Invalid command, use ADD, SEARCH or EXIT." << std::endl;
		if (std::cin.eof())
			break;
	}
	return 0;
}
