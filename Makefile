NAME = libft.a

FLAG = -Wall -Wextra -Werror

HEADERS = libft.h

SRC_DIR = libft

OBJ_DIR = obj

SRC = $(wildcard $(SRC_DIR)/*.c)

OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c $(HEADERS) Makefile
	$(CC) $(FLAG) -c $< -o $@ -I .

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY : all bonus clean fclean re