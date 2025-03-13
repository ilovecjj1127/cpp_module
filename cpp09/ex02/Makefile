# SETUP
NAME		:=	PmergeMe

CPP			:=	c++
CPPFLAGS	:=	-Wall -Wextra -Werror -std=c++11 -g 
RM			:=	rm -rf

SRC_DIR 	:=	src/
SRC_FILES	:=	main.cpp RPN.cpp
SRC			:=	$(addprefix $(SRC_DIR), $(SRC_FILES))

OBJ_DIR		:=	obj
OBJ			:=	$(SRC_FILES:%.cpp=$(OBJ_DIR)/%.o)

HEADS		:=	$(wildcard *.hpp)

# RULES
$(OBJ_DIR)/%.o: $(SRC_DIR)%.cpp
		@mkdir -p $(OBJ_DIR)
		$(CPP) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HEADS) Makefile
		$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
		@echo "\n$(GREEN)$(NAME) created!$(DEFAULT)\n"

clean: 
		@$(RM) $(OBJ_DIR)
		@echo "\n$(RED)objects cleaned!$(DEFAULT)\n"

fclean: clean
		@$(RM) $(NAME)
		@echo "\n$(RED)$(NAME) cleaned!$(DEFAULT)\n"

re: fclean all

.PHONY: all clean fclean re

# COLORS
RED		=	\033[1;31m
GREEN	=	\033[1;32m
YELLOW	=	\033[1;33m
DEFAULT	=	\033[0m