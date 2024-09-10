NAME = phonebook
SRC = PhoneBook.cpp Contact.cpp main.cpp

all : $(NAME)
$(NAME) : $(SRC)
	c++ -Wall -Werror -Wextra -g -o phonebook $(SRC)
fclean:
	-rm phonebook
re: fclean all