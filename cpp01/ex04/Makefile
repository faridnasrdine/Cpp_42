src = main.cpp
obj = $(src:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(obj)
	$(CXX) $(CXXFLAGS) -o replace $(obj)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(obj)

fclean: clean
	rm -f replace

re: fclean all
.PHONY: all clean fclean re