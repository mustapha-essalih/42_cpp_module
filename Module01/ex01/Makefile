NAME = zombie


CC = c++

C_FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = main.cpp zombieHorde.cpp Zombie.cpp

O_FILES = $(C_FILES:.cpp=.o)


%.o: %.cpp Zombie.h
	@${CC} ${C_FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${O_FILES} Zombie.h
	@${CC} ${C_FLAGS} ${O_FILES} -o ${NAME}

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all