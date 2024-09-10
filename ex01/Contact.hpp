#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <cstring>

class Contact {
	public:
		int			empty;
		Contact(void);
		void		add_info(void);
		std::string	get_value(int num) const;
		~Contact(void);
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string ph_num;
		std::string secret;
};
#endif