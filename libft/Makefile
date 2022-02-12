CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
NAME	:= libft.a
SRC		:= ft_atoi.c ft_isdigit.c ft_split.c ft_strncmp.c ft_strlen.c ft_strjoin.c ft_strndup.c get_next_line.c
OBJ		:= $(patsubst %.c, %.o, $(SRC))

.PHONY: all clean fclean re bonus

all: $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_BN)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar cr $(NAME) $(OBJ)
