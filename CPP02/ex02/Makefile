
NAME = fixed

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

SRC = Fixed.cpp main.cpp
OBJDIR = obj/
OBJ = $(addprefix $(OBJDIR),$(SRC:.cpp=.o))

BLUE = \033[38;2;0;0;255m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compilation went succesfully ✅$(RESET)"
	@echo "$(BLUE)$$BANNER$(RESET)"

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

      ___                     ___           ___          _____    
     /  /\      ___          /__/|         /  /\        /  /::\   
    /  /:/_    /  /\        |  |:|        /  /:/_      /  /:/\:\  
   /  /:/ /\  /  /:/        |  |:|       /  /:/ /\    /  /:/  \:\ 
  /  /:/ /:/ /__/::\      __|__|:|      /  /:/ /:/_  /__/:/ \__\:|
 /__/:/ /:/  \__\/\:\__  /__/::::\____ /__/:/ /:/ /\ \  \:\ /  /:/
 \  \:\/:/      \  \:\/\    ~\~~\::::/ \  \:\/:/ /:/  \  \:\  /:/ 
  \  \::/        \__\::/     |~~|:|~~   \  \::/ /:/    \  \:\/:/  
   \  \:\        /__/:/      |  |:|      \  \:\/:/      \  \::/   
    \  \:\       \__\/       |  |:|       \  \::/        \__\/    
     \__\/                   |__|/         \__\/                  

endef               
export BANNER
