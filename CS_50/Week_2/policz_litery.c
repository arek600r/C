#include <stdio.h>
#include <unistd.h>
int main(){

    char slowo[50];
    scanf("%s", &slowo);

    int num = 0;
    while(slowo[num] != '\0')
    {
        num++;
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d\n", i);
        usleep(50000);
    }
    printf("%s ma %d znakow\n", slowo, num);

    return 0;
}