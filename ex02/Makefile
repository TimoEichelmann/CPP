NAME = accounts
SRC = Account.cpp tests.cpp

all : $(NAME)
$(NAME) : $(SRC)
	c++ -std=c++98 -Wall -Werror -Wextra -o accounts $(SRC)
fclean:
	-rm accounts
re: fclean all