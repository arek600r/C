#include <stdio.h>
int call = 0;
int sum_to_n(int n);

int main(){

    int z = sum_to_n(7);
    printf("%d\n", z);
    printf("counter: %d", call);
    return 0;
    
}

int sum_to_n(int n){

    if (n == 0){
        return 0;
    }
    else
    {
        call++;
        return sum_to_n(n-1) + n;
    }
    
}