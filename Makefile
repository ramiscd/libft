# Nome da biblioteca
NAME = libft.a

# Arquivos fonte
SRC = $(wildcard *.c)

# Objetos gerados
OBJ = $(SRC:.c=.o)

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Regra padrão
all: $(NAME)

# Criação da biblioteca
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compila os .c em .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Remove arquivos gerados
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

# Recompila tudo do zero
re: fclean all
