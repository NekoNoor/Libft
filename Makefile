# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nschat <nschat@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/29 17:30:18 by nschat        #+#    #+#                  #
#    Updated: 2019/11/30 22:40:31 by nschat        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I .

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
	  ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
	  ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
	  ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
	  ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_isupper.c ft_islower.c \
	  ft_isspace.c ft_strrev.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	  ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	  ft_lstmap.c

OBJ = $(SRC:.c=.o)

NAME = libft.a

RED = \x1b[31m
GREEN = \x1b[32m
YELLOW = \x1b[33m
BLUE = \x1b[34m
CYAN = \x1b[36m
DEFAULT = \x1b[39m
DEF = $(DEFAULT)

MINUS = $(RED)[-]$(DEF)
PLUS = $(GREEN)[+]$(DEF)
NORM = $(YELLOW)[~]$(DEF)

TIME = $(CYAN)[$$(date +"%H:%M:%S")]$(DEF)

.PHONY: clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(TIME) $(PLUS) $(CYAN)$^ $(GREEN)-> $(BLUE)$@$(DEF)\n"
	@$(AR) rcs $@ $^

%.o: %.c
	@printf "$(TIME) $(PLUS) $(CYAN)$< $(GREEN)-> $(BLUE)$@$(DEF)\n"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@printf "$(TIME) $(MINUS) $(RED)$(OBJ) $(BOBJ)$(DEF)\n"
	@$(RM) $(OBJ) $(BOBJ)

fclean: clean
	@printf "$(TIME) $(MINUS) $(RED)$(NAME)$(DEF)\n"
	@$(RM) $(NAME)

re: fclean all
