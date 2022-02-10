CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
OPR		:= ./operation
ALG		:= ./algo
SRC		:= ft_stacklast.c ft_stacknew.c ft_stacksize.c\
			ft_stack_beforelast.c ft_stackclear.c\
			push_swap.c
OBJ		:= $(patsubst %.c, %.o, $(SRC))

.PHONY: all clean fclean re

all: push_swap

clean:
	cd libft; clean;
	rm -f $(OBJ)

fclean: clean

re: fclean all

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c -o $@ $<
