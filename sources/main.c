#include "./libft/libft.h"
#include "./cub3d.h"

int main(int argc, char **argv)
{
    t_env_vars env;
    int i = -1;

    (void)env;
    if (argc == 2)
    {
        parse(argv,&env);
        printf("%s\n",env.SO);
        free(env.SO);
        while (env.map[++i])
        {
            ft_putendl_fd(env.map[i], 1);
        }
        cub3d(env.map);
    }
    return (0);
}