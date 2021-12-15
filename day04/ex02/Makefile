SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ = ${SRC:.cpp=.o}
CFLAGCS = -Wall -Wextra -Werror -std=c++98
CC = clang++
NAME = AbstractClasss
HEADER = Animal.cpp Cat.hpp Dog.hpp Brain.hpp

%.o:		%.cpp ${HEADER}
		$(CC) $(CFLAGCS) -c -o $@ $<

all: $(NAME)

${NAME}: ${OBJ}
	$(CC) $(CFLAGCS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean