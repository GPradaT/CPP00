/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:44:03 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/13 10:42:09 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(Contact& contact);
		void	searchContact(int index) const;
		void	printContact(const Contact& contact) const;
		void	displayContacts() const;
		void	displayField(std::string field) const;
	private:
		Contact	contacts[8];
		int		contactCount;
		int		index;
};

#endif
