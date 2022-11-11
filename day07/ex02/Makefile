CC= c++
FLAGS=  -std=c++98 -g
NAME= Array
SRC= main
OBJ= $(SRC:=.o)
HEADERS = Array.hpp
MAIN= 

%.o: %.cpp $(HEADERS) 
		$(CC) $(FLAGS)  -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS) $(MAIN)
		$(CC) $(FLAGS) $(MAIN) $(OBJ) -o $(NAME)

clean:
		@ rm -rf $(OBJ)
fclean: clean
		@ rm -rf $(NAME)
re: fclean all