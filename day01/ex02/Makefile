CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= This_is
SRC= main.cpp
OBJ= $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS)  -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@ rm -rf $(OBJ)
fclean: clean
	@ rm -rf $(NAME)
re: fclean all