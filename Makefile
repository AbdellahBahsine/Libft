NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

CFILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_isalpha.c ft_isdigit.c
OFILES = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_isalpha.o ft_isdigit.o 

all: $(NAME)

$(NAME): $(OFILES)
	@ar rc $(NAME) $(OFILES)

%.o:%.c
	@$(CC) $(CFLAGS) -c $^

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

