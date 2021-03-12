NAME	= cub3D

SRCS	= gnl \
			cub3d \
			parser \
			main

FILES	= $(addsuffix .c, $(addprefix sources/, $(SRCS)))

OBJS	= $(FILES:.c=.o)

HEADER	= sources/cub3d.h

LIB_PATH	= sources/libft

RM		= rm -f

CC		= gcc -g

CFLAGS	= -O3 -Wall -Werror -Wextra

MLX		= libmlx.dylib

LXFLAGS = -framework OpenGl -framework Appkit

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER) $(LIB_PATH)/*.c
		make bonus -C $(LIB_PATH)
		$(CC) -o $(NAME) $(MLX) $(LXFLAGS) $(OBJS) $(LIB_PATH)/libft.a

clean:
			$(RM) $(OBJS)
			make clean -C $(LIB_PATH)

fclean:		clean
			$(RM) $(NAME)
			make fclean -C $(LIB_PATH)

re:			fclean all

norm:
	norminette $(FILES) $(HEADER) $(LIB_PATH)/

exec:
	make re
	./cub3D utils/maps/map2.cub

.PHONY:		all bonus clean fclean re
