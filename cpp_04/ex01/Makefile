NAME = animal

SRCS = src/main.cpp \
	src/Animal.cpp \
	src/Cat.cpp \
	src/Dog.cpp \
	src/WrongAnimal.cpp \
	src/WrongCat.cpp \
	src/WrongDog.cpp \
	src/Brain.cpp




OBJS = $(SRCS:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98  -Iincludes

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
