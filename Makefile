G = gcc -Wall -Wextra -Werror
SRC = ft*.c
O = $(SRC:.c=.o)
NAME = libftprintf.a
OB = $(BNS:.c=.o) 

all: $(NAME)

$(NAME): 
	$(G) -c $(SRC)
	ar rc $(NAME) $(O)
	ranlib $(NAME)
	@echo $(NAME) is created

bonus: 
	$(G) -c $(BNS)
	ar rs $(NAME) $(OB)

clean: 
	rm -f $(O) $(OB)

fclean: clean
	rm -f $(NAME)

re: fclean all