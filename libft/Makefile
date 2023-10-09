# Nombre de la biblioteca
NAME = libft.a


#compilador y Opciones de compilacion

CC = gcc
CFLAG = -Werror -Wall -Wextra

SOURCE = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_atoi.c ft_calloc.c ft_strdup.c ft_isalnum.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SOURCEBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Objetos
OBJ = $(SOURCE:.c=.o)

# Objetos Bonus
OBJB = $(SOURCEBONUS:.c=.o)

all: $(NAME)


# Regla Principal
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
# Regla OBJ
$(OBJ): $(SOURCE)
	$(CC) $(CFLAG) -c $(SOURCE)

# Regla Bonus
bonus: $(OBJ) $(OBJB)
	ar rcs $(NAME) $(OBJ) $(OBJB)

# Regla OBJB
$(OBJB): $(SOURCEBONUS)
	$(CC) $(CFLAG) -c $(SOURCEBONUS)

# limpieza
clean:
	rm -f $(OBJ) $(OBJB)
fclean: clean
	rm -f $(NAME)

re: fclean all bonus

