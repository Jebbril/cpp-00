/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 08:23:31 by orakib            #+#    #+#             */
/*   Updated: 2023/07/15 11:16:27 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H

# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

void	print_str(std::string str);

class	PhoneBook {
	private:
		Contact	c_arr[8];
	public:
		int		addc(int index);
		int		searchc(void);
		int		exitc(void);
		void	empty_contact(int i);
};

#endif