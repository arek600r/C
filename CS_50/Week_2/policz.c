#include <stdio.h>
#include <unistd.h>

int main()
{
    int ala = 450;
    for (int i = 1; i <= ala; i++ )
    {
        printf("%d\n", i);
        if (i % 25 == 0)
        {
            for(int j = 0; j < 2; j++)
            {
                printf("WeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeWeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee\n");
            }
            printf("ALAAAAAAAAAAAAAAAAAAAAAAAA KOOOOOOOOOOOOOOOOOOOOOOOOOT BOBAAAAAAAAAAAAAAAAAS BELLLLLAAAAAAAAAAAAAAAAAAAAAA\n");
            //printf("ALAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n");
            //printf("ALAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n");
            
            printf("\a");
            for(int j = 0; j < 4; j++)
            {
                printf("TATAAAAAAAAAAAAA\n");
            }
            for(int j = 0; j < 10; j++)
            {
                printf("\n");
            }
        }
        usleep(10000);
    }


}