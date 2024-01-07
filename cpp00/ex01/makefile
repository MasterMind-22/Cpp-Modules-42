NAME = megaphone

SRC = megaphone.cpp \

OBJ = ${SRC:%.cpp=%.o}

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : 8
	$(CPP) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all 

.PHONY : clean