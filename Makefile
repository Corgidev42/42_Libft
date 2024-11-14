# Variables
CC = cc
SRCS = \
    ft_strnstr.c \
    ft_isdigit.c \
    ft_putstr_fd.c \
    ft_strlcpy.c \
    ft_strlen.c \
    ft_memcmp.c \
    ft_putnbr_fd.c \
    ft_strchr.c \
    ft_striteri.c \
    ft_bzero.c \
    ft_strjoin.c \
    ft_isascii.c \
    ft_memcpy.c \
    ft_isprint.c \
    ft_putendl_fd.c \
    ft_toupper.c \
    ft_split.c \
    ft_strrchr.c \
    ft_isalpha.c \
    ft_memchr.c \
    ft_putchar_fd.c \
    ft_memset.c \
    ft_substr.c \
    ft_strncmp.c \
    ft_strmapi.c \
    ft_strtrim.c \
    ft_memmove.c \
    ft_strlcat.c \
    ft_calloc.c \
    ft_strdup.c \
    ft_atoi.c \
    ft_isalnum.c \
    ft_itoa.c \
    ft_tolower.c

BONUS_SRCS = \
    ft_lstadd_front_bonus.c \
    ft_lstdelone_bonus.c \
    ft_lstmap_bonus.c \
    ft_lstadd_back_bonus.c \
    ft_lstclear_bonus.c \
    ft_lstlast_bonus.c \
    ft_lstiter_bonus.c \
    ft_lstsize_bonus.c \
    ft_lstnew_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

# Par défaut, on compile sans les bonus
all: $(NAME)

# Compilation de la bibliothèque sans les bonus
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compilation des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Suppression des fichiers objets
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Suppression complète
fclean: clean
	rm -f $(NAME)

# Reconstruction complète
re: fclean all

# Compilation des fichiers bonus
bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
