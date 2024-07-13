/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:49:05 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/13 12:42:09 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
// #include <cctype>

void	printString(std::string str)
{
	for (int i = 0; i < (int)str.length(); ++i)
		std::cout << char(std::toupper(str[i]));
}

int    main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for (int i = 1; i < argc; i++)
		printString(std::string(argv[i]));
	std::cout << std::endl;
	return 0;
}
