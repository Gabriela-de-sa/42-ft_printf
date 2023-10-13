NAME = libftprintf.a

CFLAFS = -Wall -Wextra -Werror -I $(HEADER)

HEADER = mandatory/includes/

SRC_MANDATORY = mandatory/

FILE = \
	ft_printf.c\
	ft_putchar.c\
	ft_putnbr_base_ten.c\
	ft_putstr.c\
	ft_convert_hexa.c\
	ft_putnbr_unsigned.c\
	ft_putnbr_pointer.c\

SRC_FINAL = $(addprefix $(SRC_MANDATORY),$(FILE))

OBJECTS = ${SRC_FINAL:%.c=%.o}

all: ${NAME}

$(NAME): ${OBJECTS}
	@ar rcs ${NAME} $?

clean:
	@rm -rf ${OBJECTS} 

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus