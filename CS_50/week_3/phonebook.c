#include <stdio.h>
#include <string.h>

int main(){
	char *names[] = {"Yuliia", "David", "John"};
	char *numbers[] = {"+48123321123", "+48123234534", "+481039493020"};

	char name[40]; 
	scanf("%s", &name);
	for (int i = 0; i < 3; i++)
	{
		if(strcmp(names[i], name) == 0){
			printf("Found %s\n", numbers[i]);
			return 0;
		}
	}
	printf("Not found");
	return 1;

}