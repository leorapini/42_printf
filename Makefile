# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpinheir <lpinheir@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/23 14:35:39 by lpinheir          #+#    #+#              #
#    Updated: 2021/05/18 17:52:59 by lpinheir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC_FLAGS = -Wall -Wextra -Werror
AR_FLAGS = -rcs
RM_FLAGS = -f

S_DIR = ./
SRC = 	$(S_DIR)/ft_printf.c		\
	$(S_DIR)/ft_printf_c.c		\
	$(S_DIR)/ft_printf_d_i.c	\
	$(S_DIR)/ft_printf_s.c		\
	$(S_DIR)/ft_printf_utils.c	\
	$(S_DIR)/ft_printf_diu_utils.c	\
	$(S_DIR)/ft_printf_u.c		\
	$(S_DIR)/ft_printf_p.c		\
	$(S_DIR)/ft_printf_x.c		\
	$(S_DIR)/ft_printf_xcap.c	\
	$(S_DIR)/ft_printf_per.c	\
	$(S_DIR)/ft_atoi.c	\
	$(S_DIR)/ft_itoa.c	\
	$(S_DIR)/ft_itoh.c	\
	$(S_DIR)/ft_utoa.c	\
	$(S_DIR)/ft_puts.c	\
	$(S_DIR)/ft_strings.c	\


O_DIR = ./
OBJ = $(patsubst $(S_DIR)/%.c, $(O_DIR)/%.o, $(SRC)) 

all:	$(NAME)

$(NAME):	$(OBJ)
	ar $(AR_FLAGS) $@ $^	

$(O_DIR)/%.o:	$(S_DIR)/%.c
	gcc	$(C_FLAGS) -c $< -o $@


re:	fclean all

fclean:	clean
	rm $(RM_FLAGS) $(NAME) 

clean:
	rm $(RM_FLAGS) $(OBJ)
