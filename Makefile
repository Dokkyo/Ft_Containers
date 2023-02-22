NAME1 = ft_containers
NAME2 = std_containers

SRCS1 = main.cpp
SRCS2 = main_std.cpp

INCLUDE= .

OBJS1 = $(SRCS1:.cpp=.o)
OBJS2 = $(SRCS2:.cpp=.o)
DEPS1 = $(SRCS1:.cpp=.d)
DEPS2 = $(SRCS2:.cpp=.d)

CC= c++
FLAGS1= -Wall -Wextra -Werror -std=c++98 -g3
FLAGS2= -Wall -Wextra -Werror -std=c++11 -g3

%.o:				%.cpp
	@$(CC) $(FLAGS) -MMD -c $< -o $@ -I $(INCLUDE)

all: $(NAME1) $(NAME2)

$(NAME1): $(OBJS1)
	@echo "Compilation du programme $(NAME1)"
	$(CC) $(FLAGS1) $(OBJS1) -o $(NAME1)

$(NAME2): $(OBJS2)
	@echo "Compilation du programme $(NAME2)"
	$(CC) $(FLAGS2) $(OBJS2) -o $(NAME2)

clean:
	rm -Rf $(OBJS1) $(OBJS2) $(DEPS1) $(DEPS2)

fclean: clean
	rm -Rf $(NAME1) $(NAME2)

re: fclean all

-include $(DEPS1) $(DEPS2)
.PHONY: all clean fclean re