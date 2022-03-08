NAME	=	ex00

SRCS	=	Animal.cpp main.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS	=	$(SRCS:.cpp=.o)

CPFLAGS	=	-Wall -Wextra -Werror

INCS	=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

RM		=	rm -f

.cpp.o:
			clang++ -std=c++98 $(CPFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS) $(INCS)
			clang++ -std=c++98 $(CPFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)
			
.PHONY:		all clean fclean re