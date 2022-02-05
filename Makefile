CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
OPR		:= ./operation
ALG		:= ./algos
SRC		:= ft_atoi.c ft_isdigit.c ft_stacksize.c 
OBJ		:= $(patsubst %.c, %.o, $(SRC))

.PHONY: all clean fclean re

all: push_swap

clean:
	rm -f $(OBJ)

fclean: clean

re: fclean all

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c -o $@ $<
