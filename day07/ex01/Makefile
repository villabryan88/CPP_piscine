# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/22 20:11:16 by bvilla            #+#    #+#              #
#    Updated: 2019/05/08 23:18:24 by bvilla           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
SOURCE = iter.cpp
INC = .
OBJS = $(SOURCE:%.cpp=%.o)

$(NAME): $(SOURCE)
	@clang++ -c -Wall -Wextra -Werror $(SOURCE) -I $(INC)
	@clang++ $(OBJS) -Wall -Wextra -Werror -o $(NAME)
	@echo "compilation complete"
all: $(NAME)
clean:
	@rm -f $(OBJS) 
	@echo "removed objects"
fclean: clean
	@rm -f $(NAME)
	@echo "removed binary"
re: fclean all 
