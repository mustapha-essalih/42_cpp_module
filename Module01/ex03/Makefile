NAME = weapon


CC = c++

C_FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 

C_FLAGS = -Wall -Wextra -Werror -std=c++98


O_FILES = $(C_FILES:.cpp=.o)


%.o: %.cpp Weapon.h HumanA.h HumanB.h
	@${CC} ${C_FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${O_FILES} Weapon.h HumanA.h HumanB.h
	@${CC} ${C_FLAGS} ${O_FILES} -o ${NAME}

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all