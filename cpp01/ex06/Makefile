# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 16:13:47 by nafarid           #+#    #+#              #
#    Updated: 2025/10/28 17:04:55 by nafarid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src = main.cpp Harl.cpp
obj = $(src:.cpp=.o)
NAME = Harlfilter
CXX= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
all: $(obj)
	$(CXX) $(CXXFLAGS) -o ${NAME} $(obj)


clean:
	rm -f $(obj)

fclean: clean
	rm -f ${NAME}

re: fclean all
.PHONY: all clean fclean re