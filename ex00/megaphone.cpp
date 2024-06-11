/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:49:05 by gprada-t          #+#    #+#             */
/*   Updated: 2024/06/11 13:38:38 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int    main(int argc, char **argv)
{
    if (argc > 2) {
		for (int i = 1; i < argc; i++) {
			for (size_t j = 0; j < sizeof(argv[i]); j++) {
				std::cout << std::toupper(argv[i][j]);
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
