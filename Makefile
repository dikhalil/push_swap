# ---------------- Source files ----------------
SRCS =	main.c \
		push_swap.c \
		utils.c \
		swap.c \
		push.c \
		rotate.c \
		reverse_rotate.c \
		small_sort.c \
		radix_sort.c

# ---------------- Libft ----------------
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

# ---------------- Object files ----------------
OBJS = $(SRCS:.c=.o)

# ---------------- Compiler and flags ----------------
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

# ---------------- Default target ----------------
all: $(NAME)

# Build the executable from objects and libft
$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L $(LIBFT_PATH) -lft -o $(NAME)

# Build libft if not already
$(LIBFT):
	make -C $(LIBFT_PATH) all bonus

# ---------------- Clean object files ----------------
clean:
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJS)

# ---------------- Full clean ----------------
fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

# ---------------- Rebuild everything ----------------
re: fclean all

.PHONY: all clean fclean re
