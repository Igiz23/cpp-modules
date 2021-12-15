SRC =	main.cpp AMateria.cpp Ice.cpp Cure.cpp\
		MateriaSource.cpp Character.cpp
OBJ = ${SRC:.cpp=.o}
CFLAGCS = -Wall -Wextra -Werror -std=c++98
HEADER = AMateria.hpp Ice.hpp Cure.hpp\
         MateriaSource.hpp Character.hpp
CC = clang++
NAME = Materia

%.o:		%.cpp $(HEADER)
		$(CC) $(CFLAGCS) -c -o $@ $<

all: $(NAME)

${NAME}: ${OBJ}
	$(CC) $(CFLAGCS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

debug:
	$(CC) -g $(CFLAGCS) $(SRC) -o $(NAME)

re: fclean all

.PHONY : all clean fclean re
