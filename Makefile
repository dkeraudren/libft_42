NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

ARX = ar x

RM = rm -f

RANLIB = ranlib

FT_LIB_DIR = ft_lib/

FT_LIB = $(FT_LIB_DIR)ft_lib.a

PRINTF_DIR = ft_printf/

PRINTF = $(PRINTF_DIR)ft_printf.a

GNL_DIR = get_next_line/

GNL = $(GNL_DIR)gnl.a

all: $(NAME)

$(FT_LIB):
	make -C $(FT_LIB_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(GNL):
	make -C $(GNL_DIR)

$(NAME): $(FT_LIB) $(PRINTF) $(GNL)
	$(ARX) $(FT_LIB)
	$(ARX) $(PRINTF)
	$(ARX) $(GNL)
	$(AR) $(NAME) *.o
	$(RANLIB) $(NAME)
	$(RM) *.o

clean:
	make clean -C $(FT_LIB_DIR)
	make clean -C $(PRINTF_DIR)
	make clean -C $(GNL_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(FT_LIB_DIR)
	make fclean -C $(PRINTF_DIR)
	make fclean -C $(GNL_DIR)

re: fclean all

.PHONY: all clean fclean re