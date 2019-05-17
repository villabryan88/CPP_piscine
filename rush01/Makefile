# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/09 18:00:28 by ale-goff          #+#    #+#              #
#    Updated: 2019/05/12 23:03:22 by bvilla           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ft_gkrellm

SRCS = main.cpp TextMode.cpp NameInfo.cpp #CpuInfo.cpp DateTime.cpp Environment.cpp NetworkThroughput.cpp RamInfo.cpp 
OBJ = main.o TextMode.o NameInfo.o #CpuInfo.o DateTime.o Environment.o NetworkThroughput.o  RamInfo.o


CXX = clang++ -Wall -Werror -Wextra -std=c++98

all : $(NAME)

%.o:%.cpp
	$(CXX) -o $@ -c $<

$(NAME): $(OBJ)
	$(CXX) -lncurses -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)


re: fclean all
