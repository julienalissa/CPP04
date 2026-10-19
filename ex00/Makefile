NAME = Animal
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

SRCS := main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp
OBJS := ${SRCS:.cpp=.o}

all: ${NAME}

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
