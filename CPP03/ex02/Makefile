
NAME = fragTrap

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

SRC = main.cpp ClapTrap.cpp FragTrap.cpp
OBJDIR = obj/
OBJ = $(addprefix $(OBJDIR),$(SRC:.cpp=.o))

GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compilation went succesfully ✅$(RESET)"
	@echo "$(GREEN)$$BANNER$(RESET)"

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


   _____  __ __      _____    ______    _______   __ __      _____    __ __    
 /\_____\/_/\__/\   /\___/\  /_/\___\ /\_______)\/_/\__/\   /\___/\  /_/\__/\  
( (  ___/) ) ) ) ) / / _ \ \ ) ) ___/ \(___  __\/) ) ) ) ) / / _ \ \ ) ) ) ) ) 
 \ \ \_ /_/ /_/_/  \ \(_)/ //_/ /  ___  / / /   /_/ /_/_/  \ \(_)/ //_/ /_/ /  
 / / /_\\ \ \ \ \  / / _ \ \\ \ \_/\__\( ( (    \ \ \ \ \  / / _ \ \\ \ \_\/   
/ /____/ )_) ) \ \( (_( )_) ))_)  \/ _/ \ \ \    )_) ) \ \( (_( )_) ))_) )     
\/_/     \_\/ \_\/ \/_/ \_\/ \_\____/   /_/_/    \_\/ \_\/ \/_/ \_\/ \_\/      
                                                                               
                                                                                                                                                      

endef               
export BANNER
