#include <stdio.h>
#include "minelub.h"

void make_pyramid( int n );
int get_positive_int(void);
int main(){

	int height = get_positive_int();
	make_pyramid(height);

	return 0;
}

int get_positive_int(void)
{
	int n;
	do{
		n = get_int("Height: ");
	}while( n < 1);
	return n;
}

void make_pyramid( int height )
{
	for( int row = 1; row <= height; row++ )
	{
		for (int column = 1; column <= height; column++)
		{
			if(column <= (height - row))
			{
				printf(" ");
			}	
			else
			{
				printf("#");
			}
		}
		printf(" ");
		for (int column = 1; column <= row; column++)
		{
			printf("#");
		}
		printf("\n");
	}
}