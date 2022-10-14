NAME = megaphone

SRC = megaphone.cpp

CPP = c++

CPPFLAGS = -Werror -Wextra -Wall -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS)  $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f -r $(NAME)

re: fclean all clean re
