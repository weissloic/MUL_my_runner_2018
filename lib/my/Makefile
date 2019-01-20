#allo

CC = gcc

SRC = my_putchar.c \
	my_putstr.c \
	my_revstr.c \
	my_strlen.c \
	my_strcat.c \
	my_strncmp.c \
	my_lenght_line.c \
	convert_intchar.c \
	open_file.c


OBJ = $(SRC:.c=.o) 

NAME = libmy.a

MYH = my.h

all: $(NAME)

$(NAME): $(OBJ)
	cp $(MYH) ../../include/
	ar rc $(NAME) $(OBJ)
	rm -f *.o

	

clean : 
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean 