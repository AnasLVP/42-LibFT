NAME = libft.a
FILES = $(shell *.c)
CC = cc
AR = ar rcs
CFLAGS = -Wall -Werror -Wextra
FBASE = $(shell find *.c -exec basename {} ';')
OBJTS = $(FBASE:.c=.o)

all: $(NAME)

$(NAME): $(OBJTS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJTS)

fclean: clean
	rm -f $(NAME)

re: fclean all