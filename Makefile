NAME = libft.a
INCLUDE = ./libft.h
CFLAGS += -Wall -Wextra -Werror

SRC =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_strlcat.c ft_memset.c\
	  ft_isprint.c ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_bzero.c\
	  ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_atoi.c ft_memcpy.c\
	  ft_memmove.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c\
	  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
	  ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): 	
	@gcc -g $(CFLAGS) -I $(INCLUDE) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus:
	@gcc -g $(CFLAGS) -I $(INCLUDE) -c $(SRC) $(BONUS)
	@ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
