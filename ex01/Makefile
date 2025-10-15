# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 13:29:07 by nafarid           #+#    #+#              #
#    Updated: 2025/10/15 17:24:19 by nafarid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp PhoneBook.cpp contact.cpp
OBJ = $(SRC:.cpp=.o)
NAME = phone

CC = g++
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
