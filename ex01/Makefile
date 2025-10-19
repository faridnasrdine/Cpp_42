# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 13:29:07 by nafarid           #+#    #+#              #
#    Updated: 2025/10/19 11:08:41 by nafarid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp PhoneBook.cpp contact.cpp
OBJ = $(SRC:.cpp=.o)
NAME = phone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
