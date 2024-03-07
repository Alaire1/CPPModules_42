# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaraban <akaraban@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 17:10:06 by akaraban          #+#    #+#              #
#    Updated: 2023/12/20 20:15:48 by akaraban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

SRC = PhoneBook.cpp Contact.cpp 
OBJ = $(SRC:.cpp=.o)

YELLOW = \033[33m
GREEN = \033[38;2;0;255;0m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)$$BANNER$(RESET)"
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compilation went succesfully ✅$(RESET)"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

define BANNER


   _ (`-.  ('-. .-.                  .-') _   ('-. .-. .-')                            .-. .-')   
  ( (OO  )( OO )  /                 ( OO ) )_(  OO)\  ( OO )                           \  ( OO )  
 _.`     \,--. ,--. .-'),-----. ,--./ ,--,'(,------.;-----.\  .-'),-----.  .-'),-----. ,--. ,--.  
(__...--''|  | |  |( OO'  .-.  '|   \ |  |\ |  .---'| .-.  | ( OO'  .-.  '( OO'  .-.  '|  .'   /  
 |  /  | ||   .|  |/   |  | |  ||    \|  | )|  |    | '-' /_)/   |  | |  |/   |  | |  ||      /,  
 |  |_.' ||       |\_) |  |\|  ||  .     |/(|  '--. | .-. `. \_) |  |\|  |\_) |  |\|  ||     ' _) 
 |  .___.'|  .-.  |  \ |  | |  ||  |\    |  |  .--' | |  \  |  \ |  | |  |  \ |  | |  ||  .   \   
 |  |     |  | |  |   `'  '-'  '|  | \   |  |  `---.| '--'  /   `'  '-'  '   `'  '-'  '|  |\   \  
 `--'     `--' `--'     `-----' `--'  `--'  `------'`------'      `-----'      `-----' `--' '--'  

endef
export BANNER