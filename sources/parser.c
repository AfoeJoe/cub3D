#include "./libft/libft.h"
#include "./cub3d.h"


void    make_map(t_list **head, int size, t_env_vars *env)
{
    int i = -1;
    t_list *tmp = *head;

    env->map = ft_calloc(size + 1, sizeof(char *));
    while (tmp)
    {
        env->map[++i] = tmp->content;
        tmp = tmp->next;
    }

    i = -1;
    while (env->map[++i])
    {
        //ft_putendl_fd(env->map[i], 1);
    }
}

void parse(char **argv,t_env_vars *env)
{
    int fd = open(argv[1], O_RDONLY);
    char *line =  NULL;
    char *tmp;
    t_list *head = NULL;
    int i  = -1;
    
    while (get_next_line(fd, &line))
    {
        if (*line != '\0')
            ft_lstadd_back(&head, ft_lstnew(line));
    }
    while (++i < 8)
    {
        tmp = ft_strdup(head->content);
        if (tmp[0] == 'S' && tmp[1] == 'O')
            env->SO  =  tmp;
        if (tmp[0] == 'S' && tmp[1] != 'O')
            env->S  =  tmp;
        if (tmp[0] == 'R')
            env->R  =  tmp;
        if (tmp[0] == 'N')
            env->NO =  tmp;
        if (tmp[0] == 'W')
            env->WE  =  tmp;
        if (tmp[0] == 'E')
            env->EA  =  tmp;
        if (tmp[0] == 'F')
            env->F  =  tmp;
        if (tmp[0] == 'C')
            env->C  =  tmp;
        tmp  = NULL;
        head = head->next;

            
    }
    ft_lstadd_back(&head, ft_lstnew(line));
    make_map(&head, ft_lstsize(head),env); 
    return ;
}