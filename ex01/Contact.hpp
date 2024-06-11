/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:05:58 by gprada-t          #+#    #+#             */
/*   Updated: 2024/06/11 16:20:44 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact(std::string,std::string,std::string,std::string,std::string);
		~Contact();
		void setFirstName(std::string setFirstName);
		void setLastName(std::string setLastName);
		void setNickname(std::string setNickname);
		void setPhoneNumber(std::string setPhoneNumber);
		void setDarkestSecret(std::string setDarkestSecret);
}

#endif
