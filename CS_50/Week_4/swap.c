#include <stdio.h>

void swap(int a, int b);
void swpapoi(int *a, int *b);

int main(void)
{   

    int a = 27;
    int b = 58;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    printf("SWAP\n");

    swap(a,b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    printf("SWAP POINTER\n");

    swpapoi(&a,&b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}


void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swpapoi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}