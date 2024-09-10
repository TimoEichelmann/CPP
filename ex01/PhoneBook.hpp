#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <cstring>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		void 		add_contact();
		void 		search();
		std::string truncate(std::string in) const;
		void		display_full(int ind) const;
		~PhoneBook();
	private:
		Contact contacts[8];
};

#endif