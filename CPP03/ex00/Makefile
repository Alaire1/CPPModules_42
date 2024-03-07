
NAME = clapTrap

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

SRC = main.cpp ClapTrap.cpp
OBJDIR = obj/
OBJ = $(addprefix $(OBJDIR),$(SRC:.cpp=.o))

PURPLE = \033[38;2;255;0;255m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compilation went succesfully ✅$(RESET)"
	@echo "$(PURPLE)$$BANNER$(RESET)"

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@rm -rf $(OBJDIR)

re: fclean $(NAME)

.PHONY: all clean fclean re


define BANNER

  _____   __        _____    __ __     _______   __ __      _____    __ __    
 /\ __/\ /\_\      /\___/\  /_/\__/\ /\_______)\/_/\__/\   /\___/\  /_/\__/\  
 ) )__\/( ( (     / / _ \ \ ) ) ) ) )\(___  __\/) ) ) ) ) / / _ \ \ ) ) ) ) ) 
/ / /    \ \_\    \ \(_)/ //_/ /_/ /   / / /   /_/ /_/_/  \ \(_)/ //_/ /_/ /  
\ \ \_   / / /__  / / _ \ \\ \ \_\/   ( ( (    \ \ \ \ \  / / _ \ \\ \ \_\/   
 ) )__/\( (_____(( (_( )_) ))_) )      \ \ \    )_) ) \ \( (_( )_) ))_) )     
 \/___\/ \/_____/ \/_/ \_\/ \_\/       /_/_/    \_\/ \_\/ \/_/ \_\/ \_\/

endef               
export BANNER
