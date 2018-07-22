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
SRC = source.c
CFLAGS = -Wall -Wextra -Werror

# Commands

all: $(EXEC)

$(EXEC):
	gcc -o $(EXEC) $(SRC)

fl:
	gcc $(CFLAGS) -o $(EXEC) $(SRC)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(EXEC)

re: fclean all

refl: fclean fl
