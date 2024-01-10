NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
COMPILE = $(CC) $(FLAGS) -c 
HEADER = ft_printf.h
ARCHIVE = ar -rc $(NAME)

C_FILES = ft_putchar.c ft_putnbr.c ft_printf.c ft_putstr.c ft_put_unsigned.c ft_puthexa.c
O_FILES = $(C_FILES:.c=.o)

all : $(NAME)

$(NAME) : $(O_FILES)
	$(ARCHIVE) $(O_FILES)

%.o : %.c $(HEADER)
	$(COMPILE) $< 

clean : 
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all 