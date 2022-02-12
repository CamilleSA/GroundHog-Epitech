##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## GroundHog
##

NAME	=	groundhog

RM	=	rm -f

CC	=	g++

SRCS	=	srcs/main.cpp\
		srcs/GroundHog.cpp\

CFLAGS	=	-I/include

OBJS	=	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
