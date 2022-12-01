NAME		= a

SRC			= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

INCL 		= Animal.hpp Cat.hpp Dog.hpp Brain.hpp

OBJ			= $(SRC:.cpp=.o)

CPP 		= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJ) $(INCL)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.c $(INCL)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re