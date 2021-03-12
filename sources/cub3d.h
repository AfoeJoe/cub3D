#ifndef CUB3D_H

# define CUB3D_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE (42)
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
#include <math.h>
#include <stdio.h>
# include "./libft/libft.h"

typedef struct env_vars
{
    char    *R;
    char    *NO;
    char    *SO;
    char    *WE;
    char    *EA;
    char    *S;
    char    *F;
    char    *C;
    char    **map;

}           t_env_vars;

// char	*ft_s_strjoin(char const *s1, char const *s2);
int		get_next_line(int fd, char **line);
void    parse(char **argv, t_env_vars *env);
void    make_map(t_list **head, int size, t_env_vars *env);
int     cub3d(char **map);

typedef struct s_data{
    void *img;
    char *addr;
    int bits_per_pixel;
    int line_length;
    int endian;
}   t_data;

typedef struct mlx_vars
{
    void    *mlx;
    void    *win;
}           t_mlx_vars;



#endif