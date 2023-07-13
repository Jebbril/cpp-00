/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 08:23:31 by orakib            #+#    #+#             */
/*   Updated: 2023/07/13 17:56:47 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H

# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "Contact.hpp"

class	PhoneBook {
	private:
		Contact	c_arr[8];
	public:
		int	addc(int index);
		int	searchc(void);
		int	exitc(void);
};

#endif