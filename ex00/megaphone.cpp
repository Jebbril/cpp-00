/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:19:10 by orakib            #+#    #+#             */
/*   Updated: 2023/07/11 08:52:49 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main(int ac, char **av)
{
	int	i = 1;
	int	j;

	if (!av[i])
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else
	{
		while (av[i])
		{
			j = -1;
			while (av[i][++j])
				std::putchar(std::toupper(av[i][j]));
			i++;
		}
		std::putchar('\n');
	}
	return (ac);
}
