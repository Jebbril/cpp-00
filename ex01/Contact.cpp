/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:58:11 by orakib            #+#    #+#             */
/*   Updated: 2023/07/12 17:16:35 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::get_fname()
{
	return (this->f_name);
}

std::string	Contact::get_lname()
{
	return (this->l_name);
}

std::string	Contact::get_nname()
{
	return (this->n_name);
}

std::string	Contact::get_phone()
{
	return (this->phone);
}

std::string	Contact::get_dsecret()
{
	return (this->d_secret);
}

void	Contact::set_fname(std::string str)
{
	this->f_name = str;
}

void	Contact::set_lname(std::string str)
{
	this->l_name = str;
}

void	Contact::set_nname(std::string str)
{
	this->n_name = str;
}

void	Contact::set_phone(std::string str)
{
	this->phone = str;
}

void	Contact::set_dsecret(std::string str)
{
	this->d_secret = str;
}