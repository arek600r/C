#include <stdio.h>

float hours(int arr[]);
char up(char);
int get_hours(int len);

int main() {
    int len;
    printf("Number of weeks taking CS50: ");
    scanf("%d", &len);

    int hours[] = get_hours(len);
    for (int i = 0; i < len; i++)
    {
        printf("%d", hours[i]);
    }


}

float hours(int arr[]) {
    
}

char up(char c) {

}

int get_hours(int len)
{
    int hours[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &hours[len]);
    }
    return hours;
}