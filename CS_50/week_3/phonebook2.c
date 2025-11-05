#include <stdio.h>
#include <string.h>

typedef struct {
	char *name;
	char *number;
} person;
int main(){
	person people[3];

	people[0].name = "David";
	people[0].number = "123321123";

	people[1].name = "John";
	people[1].number = "122331423";

	people[2].name = "Yuliia";
	people[2].number = "124421123";
	
	char name[20];
	printf("Name: ");
	scanf("%s", &name);
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(people[i].name, name) == 0)
		{
			printf("Found %s\n", people[i].number);
			return 0;
		}
	}

	printf("Not found\n");
	return 1;
};