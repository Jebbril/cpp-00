/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:42:29 by orakib            #+#    #+#             */
/*   Updated: 2023/07/16 09:38:33 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::addc(int index)
{
	std::string	str;

	std::cout << "Enter contact first name : ";
	std::getline(std::cin, str);
	if (std::cin.eof())
			return (1);
	while (!str[0]) {
		std::cout << "Enter contact first name : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (1);
	}
	this->c_arr[index].set_fname(str);
	std::cout << "Enter last name : ";
	std::getline(std::cin, str);
	if (std::cin.eof())
			return (1);
	while (!str[0]) {
		std::cout << "Enter last name : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (1);
	}
	this->c_arr[index].set_lname(str);
	std::cout << "Enter nickname : ";
	std::getline(std::cin, str);
	if (std::cin.eof())
			return (1);
	while (!str[0]) {
		std::cout << "Enter nickname : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (1);
	}
	this->c_arr[index].set_nname(str);
	std::cout << "Enter phone : ";
	std::getline(std::cin, str);
	if (std::cin.eof())
			return (1);
	while (!str[0]) {
		std::cout << "Enter phone : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (1);
	}
	this->c_arr[index].set_phone(str);
	std::cout << "Enter darkest secret : ";
	std::getline(std::cin, str);
	if (std::cin.eof())
			return (1);
	while (!str[0]) {
		std::cout << "Enter darkest secret : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (1);
	}
	this->c_arr[index].set_dsecret(str);
	return (0);
}

int	PhoneBook::searchc()
{
	int			i = -1;
	std::string	str;

	if (!this->c_arr[0].get_fname()[0] && !this->c_arr[1].get_fname()[0]) {
		std::cerr << "PhoneBook is still empty !" << std::endl;
		return (1);
	}
	std::cout << "+------------+------------+------------+------------+" << std::endl;
	std::cout << "| Index      | First name | Last name  | Nickname   |" << std::endl;
	std::cout << "+------------+------------+------------+------------+" << std::endl;
	while (++i < 8 && this->c_arr[i].get_fname()[0]) {
		std::cout << "| ";
		std::cout << std::right << std::setw(10) << i;
		std::cout << " ";
		std::cout << "| ";
		print_str(this->c_arr[i].get_fname());
		std::cout << " ";
		std::cout << "| ";
		print_str(this->c_arr[i].get_lname());
		std::cout << " ";
		std::cout << "| ";
		print_str(this->c_arr[i].get_nname());
		std::cout << " |" << std::endl;
	}
	std::cout << "+------------+------------+------------+------------+" << std::endl;
	std::cout << "Enter index of contact : ";
	std::getline(std::cin, str);
	if (std::cin.eof())
			return (1);
	while (!str[0]) {
		std::cout << "Enter index of contact : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (1);
	}
	i = -1;
	while (str[++i]) {
		if (!std::isdigit(str[i])) {
			std::cerr << "Invalid index !" << std::endl;
			return (0);
		}
	}
	i = std::stoi(str);
	if (i > 7 || !this->c_arr[i].get_fname()[0])
		std::cerr << "Invalid index !" << std::endl;
	else {
		std::cout << "First name     : " << this->c_arr[i].get_fname() << std::endl;
		std::cout << "Last name      : " << this->c_arr[i].get_lname() << std::endl;
		std::cout << "Nickname       : " << this->c_arr[i].get_nname() << std::endl;
		std::cout << "Phone          : " << this->c_arr[i].get_phone() << std::endl;
		std::cout << "Darkest secret : " << this->c_arr[i].get_dsecret() << std::endl;
	}
	return (0);
}

void	PhoneBook::empty_contact(int i)
{
	this->c_arr[i].set_fname("");
	this->c_arr[i].set_lname("");
	this->c_arr[i].set_nname("");
	this->c_arr[i].set_phone("");
	this->c_arr[i].set_dsecret("");
}