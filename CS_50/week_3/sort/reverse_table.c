#include <stdio.h>

void reverse(int arr[], int size);

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, n);

    return 0;
}

void reverse(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }
    else
    {   
        printf("%d", arr[size-1]);
        reverse(arr, size-1);
    }
}