#include <stdio.h>

int collatz(int n);

int main()
{
    int n = 39;
    int z; 
    z = collatz(39);
    printf("%d", z);

}

int collatz(int n)
{
    if (n == 1)
    {
        return 0;
    }
    //even numbers
    else if ((n % 2) == 0)
        return 1 + collatz(n/2);

    else
        return 1 + collatz(3 * n + 1);
}