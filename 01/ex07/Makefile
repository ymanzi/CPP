# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 14:05:13 by ymanzi            #+#    #+#              #
#    Updated: 2019/10/17 16:38:36 by ymanzi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
SRCS = main.cpp
CXX = clang++
CXXFLAGS = -Werror -Wextra -Wall

all:
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -f $(NAME)
fclean: clean
re: fclean all

