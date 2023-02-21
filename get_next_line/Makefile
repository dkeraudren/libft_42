# Variables

NAME=gnl.a

FT_LIB_NAME=ft_lib.a

SRC_DIR=srcs/

OBJ_DIR=objs/

FT_LIB_DIR=../ft_lib/

FT_LIB=$(FT_LIB_DIR)$(FT_LIB_NAME)

HEAD=includes/

INCS = $(FT_LIB) $(HEAD)/ft_get_next_line.h

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rc
RANLIB = ranlib

SRC_FILES = 

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

all: $(NAME)

$(FT_LIB):
	make -C $(FT_LIB_DIR)

$(NAME):	$(OBJS)
			make all -C $(FT_LIB_DIR)
			$(AR) $(NAME) $? $(FT_LIB_DIR)objs/*.o
			$(RANLIB) $(NAME)

$(OBJ_DIR)%.o:		$(SRC_DIR)%.c $(INCS) | $(OBJ_DIR)
					$(CC) $(CFLAGS) -I$(HEAD) -c $< -o $@

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)

main: $(NAME) main.c
	$(CC) -I$(HEAD) main.c -L. -lftprintf -o main

bonus: $(NAME)

clean:
	make clean -C $(FT_LIB_DIR)
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(FT_LIB_DIR)

re: fclean all

.PHONY: all clean fclean re