# ---------------- Core Source files ----------------
SRCS =  ft_isdigit.c \
		ft_isnumber.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstlast.c \
		ft_lstlastprev.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_issorted.c
# Object files
OBJS = $(SRCS:.c=.o)

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

# ---------------- Default target ----------------
all: $(NAME)

# Build the library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compile each .c into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Bonus: build the bonus objects and add them to the library
bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) 

# Clean object files
clean:
	rm -f $(OBJS) 

# Full clean
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re 
