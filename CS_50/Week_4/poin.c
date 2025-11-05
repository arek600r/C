#include <stdio.h>

int main()
{
    int n = 50;
    int *p = &n; 
    // p is n address
    // n is an variable value
    printf("%i\n", *p);
    return 0; 
}