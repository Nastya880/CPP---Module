NAME		= a

SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

INCL 		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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