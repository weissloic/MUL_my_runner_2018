##
## EPITECH PROJECT, 2018
## Project Name
## File description:
## [file description here]
##



CC	=	gcc -g

CFLAGS	=       -g3 -I ./include

LDFLAGS =	-lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio
#LDFLAGS =	-lc_graph_prog

RM 	= 	rm -f

SRC	=	main.c	\
		sources/create.c	\
		sources/check.c	\
		sources/collide.c	\
		sources/game_engine.c 	\
		sources/map_treatment.c	\
		sources/jump.c 	\
		sources/destroy.c 	\
		sources/main_menu.c 	\
		sources/main_menu_two.c 	\
		sources/create2.c	\
		sources/create3.c	\
		sources/create4.c	\
		sources/create5.c	\
		sources/display.c 	\
		sources/create_map.c 	\
		sources/option.c 	\
		sources/option_two.c 	\
		sources/option_three.c 	\
		sources/game_two.c 	\

OBJS	=	$(SRC:.c=.o)

NAME	= 	my_runner

all: $(NAME)

$(NAME): $(OBJS)
	@make -sC lib/my
	$(CC) -o $(NAME) $(OBJS) -I ./include $(LDFLAGS) -lm -I/include/ -L./lib/my -lmy -g

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
