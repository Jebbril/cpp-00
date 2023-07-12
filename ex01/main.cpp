#include "Contact.hpp"

int	main()
{
	Contact	newc;

	newc.set_fname("omar");
	newc.set_lname("rakib");
	newc.set_lname("jebril");
	newc.set_phone("0622575021");
	newc.set_dsecret("why are you gay ?");
	std::cout << newc.get_dsecret() << std::endl;
}