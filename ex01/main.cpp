#include "PhoneBook.hpp"

void	print_str(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::right << std::setw(10) << str ;
}

int	main()
{
	PhoneBook	newbook;
	std::string	str;
	int			i = 0;

	while (1) {
		std::cout << "Enter a command : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (0);
		while (str[0] == 0) {
			std::cout << "Enter a command : ";
			std::getline(std::cin, str);
			if (std::cin.eof())
				return (0);
		}
		if (!str.compare("ADD")) {
			if (newbook.addc(i)) {
				return (0);
			}
			else
				i++;
		}
		else if (!str.compare("SEARCH")) {
			if (newbook.searchc())
				return (1);
		}
		else if (!str.compare("EXIT"))
			break;
		else
			std::cerr << "Commmand not found !" << std::endl;
		if (i > 7)
			i = 0;
	}
}