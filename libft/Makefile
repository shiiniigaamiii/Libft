NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(shell find . -name '*.c')

BONUS_SRCS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
			 	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
		 		ft_lstclear.c ft_lstiter.c ft_lstmap.c	 

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

HEADER = libft.h

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(NAME) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

# $(OBJS): $(SRCS)
#	$(GCC) $(FLAGS) -c $(SRCS)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

