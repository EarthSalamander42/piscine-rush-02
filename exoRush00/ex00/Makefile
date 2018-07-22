# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 13:53:26 by jmaguire          #+#    #+#              #
#    Updated: 2018/07/21 13:56:40 by jmaguire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = program
SRC = main.c
CFLAGS = -Wall -Wextra -Werror

# Commands

all:
	cc $(CFLAGS) -o $(EXEC) $(SRC) -L. -lft

base: $(EXEC)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(EXEC)

re: fclean all

refl: fclean fl

$(EXEC):
	cc -o $(EXEC) $(SRC)
