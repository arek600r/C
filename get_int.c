#include <stdio.h>
#include "minelub.h"

void meow(int n);
int get_positive_int(void);
int main(){

	int times = get_positive_int();
	meow(times);

	return 0;
}

int get_positive_int(void)
{
	int n;
	do{
		n = get_int("Number: ");
	}while( n < 1);
	return n;
}

void meow(int times){
	for (int i = 0; i < times; i++){
		printf("meow\n");
	}
}