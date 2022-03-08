NAME	=	ex03

SRCS	=	AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp

OBJS	=	$(SRCS:.cpp=.o)

CPFLAGS	=	-Wall -Wextra -Werror

INCS	=	AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp \
			MateriaSource.hpp

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