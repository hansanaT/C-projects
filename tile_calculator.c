#include <stdio.h>
#include <math.h>

int main()
{
    float f_length,f_width,t_length,t_width,tile_area,floor_area;

    printf("Input tile length : ");
    scanf("%f",&t_length);

    printf("Input tile width : ");
    scanf("%f",&t_width);

    printf("Input floor length : ");
    scanf("%f",&f_length);

    printf("Input floor width : ");
    scanf("%f",&f_width);

    floor_area=f_length*f_width;
    tile_area=t_length*t_width;
    int no_of_tiles= ceil(floor_area/tile_area);

    printf("No of Tiles required %d",no_of_tiles);

    return 0;

}
