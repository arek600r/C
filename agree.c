#include <stdio.h>

int main(){
	char c[1];
	printf("Do you agree?\n");
	scanf("%c", &c);
	if (c[0] == 'y' || c[0] == 'Y'){
		printf("Agreed\n");
	}
	else if (c[0] == 'n' || c[0] == 'N'){
		printf("Disagreed.\n");
	}
	else{
		printf("Do you agree or not?");
	}

}
