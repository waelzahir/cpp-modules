CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98  
NAME=  type
SRC=  Typeid
MAIN= main
OBJ= $(SRC:=.o)  $(MAIN:=.o)
HEADERS = Typeid.hpp

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