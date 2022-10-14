NAME = phoneBook

CPP = c++

CPPFLAGS = -Werror -Wextra -Wall -std=c++98

SRCS = PhoneBook.cpp Contact.cpp main.cpp

all: $(NAME)

$(NAME):
	$(CPP) $(CPPFLAGS)  $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -r -f $(NAME)

re: fclean all
