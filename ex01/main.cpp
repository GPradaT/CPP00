/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:44:00 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/06 23:49:16 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

int main()
{
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
