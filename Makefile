CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putnbr.c \
	   ft_putstr.c \
	   ft_putptr.c \
	   ft_puthex.c \
	   ft_printf.c \
	   ft_uputnbr.c \
	   ft_putchar.c


NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	ar csr $(NAME) $@


clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
