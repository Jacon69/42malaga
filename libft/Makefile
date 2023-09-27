# Nombre de la biblioteca
NAME = libft.a

#compilador y Opciones de compilacion

CC = gcc
CFLAG = -Werror -Wall -Wextra

SOURCE = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_atoi.c ft_calloc.c ft_strdup.c ft_isalnum.c ft_substr.c ft_strjoin.c

# Objetos
OBJ = $(SOURCE:.c=.o)

all: $(NAME)
# Regla Principal

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Regla OBJ
$(OBJ): $(SOURCE)
	$(CC) $(CFLAG) -c $(SOURCE)
# limpieza
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all

