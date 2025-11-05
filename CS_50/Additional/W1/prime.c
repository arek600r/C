#include <stdio.h>

void prime(int min, int max);

int main(){
    int min, max; 
    min = 2;
    max = 100;
    prime(min, max);

    return 0;
}

void prime(int min, int max){
   
    for (min; min <= max; min++)
    {   int isPrime = 1;
        if (min < 2)
            {
                continue;
            }
        for (int i = 2; i <= (min/2); i++){
            
            if ((min % i) == 0)
                {   isPrime = 0;
                    break;
                }
               
        }
        
        if (isPrime == 1)
        {
            printf("%d\n", min);
        }
    }}
