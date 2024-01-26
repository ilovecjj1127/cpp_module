# SETUP
NAME		:=	megaphone

CPP			:=	c++
CPPFLAGS	:=	-Wall -Wextra -Werror
RM			:=	rm -rf

SRC_DIR		:=	src
SRC_FILE	:=	megaphone.cpp
SRC			:=	$(SRC_FILE:%=$(SRC_DIR)/%)

OBJ_DIR		:=	obj
OBJ			:=	$(SRC_FILE:%.cpp=$(OBJ_DIR)/%.o)

INC_DIR		:=	include
INCLUDE		:=	-I$(INC_DIR)

# RULES
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
		@mkdir -p $(OBJ_DIR)
		$(CPP) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
		$(CPP) $(CPPFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)
		@echo "\n$(GREEN)$(NAME) created!$(DEFAULT)\n"

clean: 
		@$(RM) $(OBJ_DIR)
		@echo "\n$(RED)objects cleaned!$(DEFAULT)\n"

fclean: clean
		@$(RM) $(NAME)
		@echo "\n$(RED)$(NAME) cleaned!$(DEFAULT)\n"

re: fclean all

.PHONY: all clean fclean re check

# COLORS
RED		=	\033[1;31m
GREEN	=	\033[1;32m
YELLOW	=	\033[1;33m
DEFAULT	=	\033[0m