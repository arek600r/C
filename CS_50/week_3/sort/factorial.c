#include <stdio.h>


int factorial(int n);
int main()
{
    int n = 5;
    int z;
    z = factorial(n);
    printf("%d", z);
    return 0;
}

int factorial(int n)
{
    if (n > 0)
    {
        return n * factorial(n-1);
    }
    else if (n == 0){
       return 1;
    }
    
}