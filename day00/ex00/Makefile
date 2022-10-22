
CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= megaphone
SRC= megaphone.cpp
OBJ= $(SRC:.cpp=.o)
%.o: %.cpp $(SRC)
	@$(CC) $(FLAGS)  -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS)  $(OBJ) -o $(NAME) $(FLAGS)
	@echo '[X] Compiled'
clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all
.phony: all clean fclean re