#include <stdio.h>

void sort_lin(int arr[]);
void bubble_sort(int arr[]);
void merge_sort(int arr[], int len);
int main(){
    int to_sort[] = {63,43,10,94,11,64,99,4,9,127};
    int n = sizeof(to_sort) / sizeof(to_sort[0]);
//    sort_lin(to_sort);
//    bubble_sort();
    merge_sort(to_sort, n);
    return 0;
}

void sort_lin(int arr[])
{   
    for (int i = 0; i < 10; i++)
    {
    //    printf("%d ", arr[i]);
    }
    
    int support;
    int i = 0;
    do{
        if(arr[i] > arr[i+1])
        {   
            support = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = support;
            i = 0;
            continue;
        }
            i++;
            //weź pierwszy element
            //sprawdź czy drugi element jest mniejszy, jeżeli tak, zamień miejscami. 
    }while(i < 10);
    for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[j]);
        }


}

void bubble_sort(int arr[])
{
    int swap;
    int i = 0;
    for (int i = 0; i < 11; i++)
    {
        for(int j = 0; j < 11; j++ )
        {
            if(arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }

    for (int i = 0; i < 11; i++)
    {
        printf("%d ", arr[i]);
    }
}


void merge_sort(int arr[], int len)
{
    int *left;
    //for (int i = 0; i < len / 2; i++)
    //{
    //    left[i] = arr[i];
    //}
    int *righ = arr + len/2;
    int n = sizeof(righ) / sizeof(righ[0]);
    printf("%d\n", n);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", righ[i]);
    }

    
}