NAME = zombie

CC = c++

C_FILES = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
  
C_FLAGS = -Wall -Wextra -Werror -std=c++98

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