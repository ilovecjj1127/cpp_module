# SETUP
NAME		:=	bsp

CPP			:=	c++
CPPFLAGS	:=	-Wall -Wextra -Werror -std=c++98
RM			:=	rm -rf

SRC			:=	Fixed.cpp \
				main.cpp \
				Point.cpp \
				bsp.cpp

OBJ_DIR		:=	obj
OBJ			:=	$(SRC:%.cpp=$(OBJ_DIR)/%.o)

HEADS		:=	$(wildcard *.hpp)

# RULES
$(OBJ_DIR)/%.o: %.cpp
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