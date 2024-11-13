#Variables
CC = gcc
SRC_DIR = srcs
INC_DIR = includes
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)
NAME = libft.a

#par defaut
all : $(NAME)

#compilation de la biliotheque
$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

#compilation des fichiers objets
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

#suppression fichiers objets
clean :
	rm -f $(OBJS)

#supression complete
fclean : clean
	rm -f $(NAME)

#reconstruction conplete
re : fclean all


#Variable speciales
# $@ nom cibles
# $< nom premiere dependances
# $^ liste dependances
# $? liste dependances plus recentes que la cible
# $* nom fichier, sans son extension
