# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 17:07:38 by nafarid           #+#    #+#              #
#    Updated: 2025/10/28 17:07:38 by nafarid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src = $(wildcard *.cpp)
obj = $(src:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(obj)
	$(CXX) $(CXXFLAGS) -o zombie $(obj)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(obj)

fclean: clean
	rm -f zombie

re: fclean all
.PHONY: all clean fclean re