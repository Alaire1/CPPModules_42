NAME = brain

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

SRC = main.cpp
OBJDIR = obj/
OBJ = $(addprefix $(OBJDIR),$(SRC:.cpp=.o))

YELLOW = \033[33m
GREEN = \033[38;2;0;255;0m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compilation went succesfully ✅$(RESET)"
	@echo "$(YELLOW)$$BANNER$(RESET)"

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


      (            (       )  
   (  )\ )   (     )\ ) ( /(  
 ( )\(()/(   )\   (()/( )\()) 
 )((_)/(_)|(((_)(  /(_)|(_)\  
((_)_(_))  )\ _ )\(_))  _((_) 
 | _ ) _ \ (_)_\(_)_ _|| \| | 
 | _ \   /  / _ \  | | | .` | 
 |___/_|_\ /_/ \_\|___||_|\_|                  
endef
export BANNER
