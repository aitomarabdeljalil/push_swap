CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
COMMON	:= ft_stack_beforelast.c ft_stackclear.c ft_stacklast.c ft_stacknew.c ft_stacksize.c\
			operations/ft_display.c operations/ft_isemty.c operations/ft_pop.c\
			operations/ft_push.c operations/swap_pa.c operations/swap_pb.c\
			operations/swap_ra.c operations/swap_rb.c operations/swap_rr.c\
			operations/swap_rra.c operations/swap_rrb.c operations/swap_rrr.c\
			operations/swap_sa.c operations/swap_sb.c operations/swap_ss.c\
			analyse/check_and_getstack.c analyse/ft_tofree.c
SRC		:= $(COMMON) push_swap.c algo/align.c algo/index.c algo/markup.c algo/pushtoa.c algo/pushtob.c algo/utils_rr.c algo/utils_rrr.c
BSRC	:= $(COMMON) checker.c algo/index.c
OBJ		:= $(patsubst %.c, %.o, $(SRC))
NAME	:= push_swap
BNAME	:= checker

.PHONY: all clean fclean re

all: $(NAME)

clean:
	make -C libft clean
	rm -f $(OBJ)

fclean:
	make -C libft fclean
	rm -f $(OBJ) $(NAME) $(BNAME)

re: fclean all

bonus: $(BNAME)

libft/libft.a:
	make -C libft

$(NAME): $(SRC) $(COMMON) libft/libft.a push_swap.h
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) libft/libft.a

$(BNAME): $(BSRC) $(COMMON) libft/libft.a push_swap.h
	$(CC) $(CFLAGS) -o $(BNAME) $(BSRC) libft/libft.a
