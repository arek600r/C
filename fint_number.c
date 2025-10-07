#include <stdio.h>
#include<stdlib.h>  
#include <time.h>

int generate_number();

int main(){
	int find_number = generate_number();
	printf("%d ", find_number);
	int num; 

	while(num != find_number){
		printf("Enter an integer from 1 to 100");
		scanf("%d", &num);
		if (num == find_number){
			printf("Bingo!, %d is correct number ", num);
			break;
		}
		else{
			printf("%d is not this number ", num);
			continue;
		}
	}
	return 0;
}

int generate_number(){
	int random_number;
	for(int i = 0; i < 10; i++){
		random_number = rand() % 100 + 1;
	}
	return random_number;
}