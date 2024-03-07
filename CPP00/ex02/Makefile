NAME = account

CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

SRC = Account.cpp test.cpp
OBJ = $(SRC:.cpp=.o)

YELLOW = \033[33m
GREEN = \033[38;2;0;255;0m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)$$BANNER$(RESET)"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

define BANNER

   ('-.                                                        .-') _  .-') _    
  ( OO ).-.                                                   ( OO ) )(  OO) )   
  / . --. /   .-----.   .-----.  .-'),-----.  ,--. ,--.   ,--./ ,--,' /     '._  
  | \-.  \   '  .--./  '  .--./ ( OO'  .-.  ' |  | |  |   |   \ |  |\ |'--...__) 
.-'-'  |  |  |  |('-.  |  |('-. /   |  | |  | |  | | .-') |    \|  | )'--.  .--' 
 \| |_.'  | /_) |OO  )/_) |OO  )\_) |  |\|  | |  |_|( OO )|  .     |/    |  |    
  |  .-.  | ||  |`-'| ||  |`-'|   \ |  | |  | |  | | `-' /|  |\    |     |  |    
  |  | |  |(_'  '--'\(_'  '--'\    `'  '-'  '('  '-'(_.-' |  | \   |     |  |    
  `--' `--'   `-----'   `-----'      `-----'   `-----'    `--'  `--'     `--'    

endef
export BANNER
