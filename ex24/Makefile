NAME     := libft.a

SRC      := srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c
OBJS     := $(SRC:.c=.o)


CC       := cc 
CFLAGS  := -Wall -Wextra -Werror 
CPPFLAGS := -I includes 

AR       := ar 
ARFLAGS  := rcs

RM      := rm -f 

all: $(NAME) 

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

%.o: (SRC)/%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
