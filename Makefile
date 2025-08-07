NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf
INC = -I .
CP = cp
SRC = \
	ft_printf.c	ft_print_numbers.c \
	ft_print_chars.c ft_print_hexptr.c

LIBFT_PATH = libft
LIBFT = ${LIBFT_PATH}/libft.a
OBJS = $(SRC:.c=.o)

all: $(NAME) banner

banner:
	@echo ""
	@echo "                               ,----."
	@echo "                              ( WOW! )                         .-."
	@echo "                               \`----' _                         \ \ "
	@echo "                                     (_)                         \ \ "
	@echo "                                         O                       | |"
	@echo "                    |\\ /\\                  o                     | |"
	@echo "    __              |,\\(_\\_                  . /\\---/\\   _,---._ | |"
	@echo "   ( (              |,\\\`   \`-^.               /^   ^  \\,\'       \`. ;"
	@echo "    \\ \\             :    \`-'   )             ( O   O   )           ;"
	@echo "     \\ \\             \\        ;               \`.=o=__,'            \\"
	@echo "      \\ \\             \`-.   ,'                  /         _,--.__   \\"
	@echo "       \\ \\ ____________,'  (                   /  _ )   ,'   \`-. \`-. \\"
	@echo "        ; '                ;                  / ,' /  ,'        \\ \\ \\ \\"
	@echo "        \\                 /___,-.            / /  / ,'          (,_)(,_)"
	@echo "         \`,    ,_____|  ;'_____,'           (,;  (,,)      oZZy"
	@echo "       ,-\" \\  :      | :"
	@echo "      ( .-\" \\ \`.__   | |"
	@echo "       \\__)  \`.__,'  |__)  louiS"
	@echo "no r3l!Nk =O"

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJS)
	${MAKE} -C ${LIBFT_PATH}
	${CP} ${LIBFT} ${NAME}
	$(AR) $(NAME) $(OBJS)

.PHONY: all clean fclean re normi banner

clean:
	${MAKE} -C ${LIBFT_PATH} clean
	$(RM) $(OBJS)

fclean: clean
	${MAKE} -C ${LIBFT_PATH} fclean
	$(RM) $(NAME)

re: fclean all

normi:
	@norminette -R CheckForbiddenSourceHeader