#include <stdio.h>

int main(){
    char name[20];
    scanf("%s", &name);
    printf("%s\n", name);

    int n = 0;
    while (name[n] != '\0'){
        n++;
    }
    printf("%d", n);


    return 0;

}