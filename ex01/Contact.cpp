/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:34:14 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/13 10:52:19 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//Generating constructors
Contact::Contact()
{
	setFirstName("");
	setLastName("");
	setNickname("");
	setPhoneNumber("");
	setDarkestSecret("");
}

Contact::Contact(const std::string& firstName, const std::string& lastName,
			const std::string& nickname, const std::string& phoneNumber,
			const std::string& darkestSecret)
{
	setFirstName(firstName);
	setLastName(lastName);
	setNickname(nickname);
	setPhoneNumber(phoneNumber);
	setDarkestSecret(darkestSecret);
}

Contact::~Contact()
{
}

//generating setters
void	Contact::setFirstName(const std::string& firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(const std::string& lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickname(const std::string& nickname)
{
	this->nickname = nickname;
}

void	Contact::setPhoneNumber(const std::string& phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string& darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

//generating getters
std::string	Contact::getFirstName() const
{
	return this->firstName;
}

std::string Contact::getLastName() const
{
	return this->lastName;
}

std::string Contact::getNickname() const
{
	return this->nickname;
}

std::string Contact::getPhoneNumber() const
{
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return this->darkestSecret;
}


bool	Contact::isEmpty() const
{
	return (this->firstName.size() == 0 || this->lastName.size() == 0
			|| this->nickname.size() == 0 || this->phoneNumber.size() == 0
			|| this->darkestSecret.size() == 0);
}

bool	Contact::wrongData() const
{
	if (this->firstName.size() > 15 || this->lastName.size() > 15
		|| this->nickname.size() > 10 || this->darkestSecret.size() > 100
		|| this->phoneNumber.size() > 12)
		return (true);
	for (int i = 0; i < (int)phoneNumber.length(); i++)
	{
		if (!isdigit(phoneNumber[i]))
			return (true);
	}
	return (false);
}
