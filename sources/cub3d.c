#include "cub3d.h"
#include "./libft/libft.h"
#include "../utils/minilibx_mms/mlx.h"

void my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char *dst;

    dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}

int key_hook(int keycode, t_mlx_vars *vars){
    ft_putchar_fd(keycode+'0',1);
    printf("PRESSED\n");

    (void)vars;
    return (0);
}
int cub3d(char **map)
{
    t_mlx_vars vars;
    t_data   img;
    int x = -1;
    int y = -1;


    vars.mlx = mlx_init();
    vars.win = mlx_new_window(vars.mlx, 600,600,"test");
    img.img = mlx_new_image(vars.mlx, 1920,1080);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel,&img.line_length,&img.endian);

    while (map[++y])
    {
        x = -1;
        while (map[y][++x])
        {
                my_mlx_pixel_put(&img, x, y, 0xFFFFFF);
        }    
    }
                mlx_put_image_to_window(vars.mlx,vars.win,img.img,100,100);
    mlx_key_hook(vars.win,key_hook,&vars);
    mlx_loop(vars.mlx);
    return (0);
}