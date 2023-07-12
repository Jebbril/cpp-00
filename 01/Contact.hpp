/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:34:49 by orakib            #+#    #+#             */
/*   Updated: 2023/07/12 17:36:58 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H

# define CONTACT_H

# include <iostream>
# include <string>

class	Contact {
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	n_name;
		std::string	phone;
		std::string	d_secret;
	public:
		std::string get_fname(void);
		std::string get_lname(void);
		std::string get_nname(void);
		std::string get_phone(void);
		std::string get_dsecret(void);
		void set_fname(std::string str);
		void set_lname(std::string str);
		void set_nname(std::string str);
		void set_phone(std::string str);
		void set_dsecret(std::string str);
};

#endif