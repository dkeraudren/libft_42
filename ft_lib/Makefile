# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkeraudr <dkeraudr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 16:20:43 by dkeraudren        #+#    #+#              #
#    Updated: 2023/02/21 19:46:54 by dkeraudr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_lib.a

SRC_DIR = srcs/

OBJ_DIR = objs/

HEAD = includes/

INCS = $(HEAD)ft_lib.h

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rc
RANLIB = ranlib

SRC_FILES = ft_isdigit ft_memset ft_strjoin ft_strtrim ft_isprint\
ft_putchar_fd ft_strlcat ft_substr ft_atoi ft_itoa ft_putendl_fd\
ft_strlcpy ft_tolower ft_bzero ft_putnbr_fd ft_strlen\
ft_toupper ft_calloc ft_memchr ft_putstr_fd ft_strmapi ft_isalnum\
ft_memcmp ft_split ft_strncmp ft_isalpha ft_memcpy ft_strchr\
ft_strnstr ft_isascii ft_memmove ft_strdup ft_strrchr ft_striteri\
ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast\
ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap\
ft_putchar ft_putstr ft_itoa_base ft_atof ft_isspace\

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

all: $(NAME)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c $(INCS) | $(OBJ_DIR)
				$(CC) $(CFLAGS) -I$(HEAD) -c $< -o $@

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus