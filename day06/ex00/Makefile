CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98  -g
NAME=  convert
SRC=  Convertion
MAIN= main
OBJ= $(SRC:=.o)  $(MAIN:=.o)
HEADERS = Convertion.hpp

%.o: %.cpp $(HEADERS) 
		$(CC) $(FLAGS)  -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		@ rm -rf $(OBJ)
fclean: clean
		@ rm -rf $(NAME)
re: fclean all