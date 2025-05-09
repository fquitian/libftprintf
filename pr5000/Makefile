NAME = libftprintf.a
SRCS = ft_printf.c ft_printf_utils1.c ft_printf_utils2.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME) prueba

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

prueba: $(NAME) prueba.o
	$(CC) $(CFLAGS) -o prueba prueba.o -L. -lftprintf

prueba.o: prueba.c
	$(CC) $(CFLAGS) -c prueba.c

clean:
	rm -f $(OBJS) prueba.o

fclean: clean
	rm -f $(NAME) prueba

re: fclean all

.PHONY: all clean fclean re

