# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orakib <orakib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 17:42:19 by orakib            #+#    #+#              #
#    Updated: 2023/07/15 13:56:26 by orakib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = Contact.cpp main.cpp PhoneBook.cpp

HEADER = PhoneBook.hpp

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re