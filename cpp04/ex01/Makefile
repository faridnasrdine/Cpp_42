SRC =	main.cpp Cat.cpp Animal.cpp Dog.cpp WrongAnimal.cpp \
		WrongCat.cpp
NAME = Polymorphism
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY : clean fclean all re
