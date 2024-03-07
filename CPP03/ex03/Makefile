
NAME = diamondTrap

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJDIR = obj/
OBJ = $(addprefix $(OBJDIR),$(SRC:.cpp=.o))

ORANGE = \033[0;33m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compilation went succesfully ✅$(RESET)"
	@echo "$(ORANGE)$$BANNER$(RESET)"

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


 ______  _____    _____    _     _   _______   __ __      _____    __ __    
/ ____/\/\ __/\  /\___/\  /_/\ /\_\/\_______)\/_/\__/\   /\___/\  /_/\__/\  
) ) __\/) )__\/ / / _ \ \ ) ) ) ( (\(___  __\/) ) ) ) ) / / _ \ \ ) ) ) ) ) 
 \ \ \ / / /    \ \(_)/ //_/ / \ \_\ / / /   /_/ /_/_/  \ \(_)/ //_/ /_/ /  
 _\ \ \\ \ \_   / / _ \ \\ \ \_/ / /( ( (    \ \ \ \ \  / / _ \ \\ \ \_\/   
)____) )) )__/\( (_( )_) )\ \   / /  \ \ \    )_) ) \ \( (_( )_) ))_) )     
\____\/ \/___\/ \/_/ \_\/  \_\_/_/   /_/_/    \_\/ \_\/ \/_/ \_\/ \_\/      
                                                                            

endef               
export BANNER
