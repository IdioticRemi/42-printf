# LIB NAME

NAME	= libftprintf.a

# SOURCES

SRC	= \
	ft_printf \
	conv/ft_stos \
	conv/ft_ctos \
	conv/ft_ptos \
	conv/ft_utos \
	conv/ft_xtos \
	args/ft_argnew \
	args/ft_free_arg \
	args/ft_get_length \
	args/ft_lst_argnew \
	args/ft_parse_arg \
	args/ft_parse_args \
	args/ft_print_arg

SRCS	= $(addprefix src/, $(addsuffix .c, $(SRC)))
OBJS	= $(SRCS:.c=.o)

INCL	= ./includes
LIBFT	= ./libft

# COMMANDS

CC		= gcc
RM		= rm -f
CP		= cp
AR		= ar rc
RN		= ranlib

CFLAGS	= -Wall -Werror -Wextra -I$(INCL) -L$(LIBFT) -lft

# FORMAT

FG_MAGE	= \033[0;35m
FG_CYAN	= \033[0;36m
FG_WHIT	= \033[0;37m
FG_GREE	= \033[0;32m

C_RESET	= \033[0m

C_BUILD	= $(FG_WHIT)     [ BUILD ] [ printf ]$(RESET)
C_BIN	= $(FG_CYAN) %s$(RESET)
C_AR	= $(FG_WHIT)        [ AR ] [ printf ]$(RESET) $(FG_MAGE)$(NAME) has been packed.$(RESET)
C_CLEAN	= $(FG_WHIT)     [ CLEAN ] [ printf ]$(RESET) $(FG_GREE)Every .o has been removed.$(RESET)
C_FCLEA	= $(FG_WHIT)    [ FCLEAN ] [ printf ]$(RESET) $(FG_GREE)$(NAME) was removed.$(RESET)

# RULES

%.o: %.c $(addsuffix /ft_printf.h, $(INCL))
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(C_BUILD)$(C_BIN)\n" "$<"

$(NAME): libft $(OBJS)
	@$(MAKE) -s -C libft bonus
	@$(CP) libft/libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS)
	@$(RN) $(NAME)
	@printf "$(C_AR)\n"

all: $(NAME)

clean:
	@$(MAKE) -s -C libft clean
	@$(RM) $(OBJS) $(B_OBJS)
	@printf "$(C_CLEAN)\n"

fclean:
	@$(MAKE) -s -C libft fclean
	@$(RM) $(OBJS) $(B_OBJS)
	@printf "$(C_CLEAN)\n"
	@$(RM) $(NAME)
	@printf "$(C_FCLEA)\n"

re: fclean all
