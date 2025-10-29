#include <stdio.h>

int main(){
	char string_answ[40];
	printf("What is your name?\n");
	scanf("%s", &string_answ);
	printf("hello %s",string_answ);
}