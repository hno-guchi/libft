CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./includes

NAME = libft.a

SRCS =

OBJS = $(addprefix srcs/, $(SRCS:%.c=%.o))

.c.o:
		$(CC) $(CFLAGS) -c $(INCLUDE) $< -o $(<:%.c=%.o)

$(NAME):	$(OBJS)
		ar -rcs $@ $^

all:	$(NAME)
clean:
		rm -f $(OBJS)
fclean:
		rm -f $(NAME)
re:	fclean	all

.PHONY:	all	clean	fclean	re

