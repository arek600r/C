#include <stdio.h>

void count(int n);

int main(){

        count(10);
        return 0;
}

void count(int n){

    if (n == 0){
        return;
    }
    else{
    count(n-1);
    }
    printf("%d\n",n);

}

