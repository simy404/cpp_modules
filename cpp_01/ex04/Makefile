NAME = sed_is_for_losers

SRCS = main.cpp

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
