SRC = src/*.c

OBJ = $(addprefix $(OBJ_DIR), *.o)

OBJ_DIR = obj/

INC = inc/libmx.h

NAME = libmx.a

FLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all : $(NAME)

$(NAME) : $(OBJ) 
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

 $(OBJ) : $(SRC) $(INC) | $(OBJ_DIR)
	@clang $(SRC) -c $(FLAGS) -I $(INC)
	@mv *.o $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)

uninstall: clean
	@rm -f $(NAME)

reinstall: uninstall all

