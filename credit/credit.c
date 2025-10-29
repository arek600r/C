#include <stdio.h>
int calc_sum(long long number);
void check_owner(int how_long, long long number);
int main(){

	long long cardnr = 4003600000000014;
	int is_valid, how_long = calc_sum(cardnr);
	printf("%d\n", is_valid);
	if (is_valid == 1)
	{
		printf("VALID\n");
		check_owner(how_long, cardnr);
	}
	else
	{
		printf("INVALID");
	}

	

}

void check_owner(int how_long, long long number){
	long long support = number; 
	while(support >= 100)
	{
			support /= 10;
	}
	if (how_long == 15 && (support == 35 || support == 34 || support == 37))
	{
		printf("American Express");
	}
	else if (how_long == 16 && (support == 51 || support == 52
	 || support == 53 || support == 54 || support == 55))
	{
		printf("MasterCard");
	}
	else if((how_long == 16 || how_long == 13) && ((support / 10) == 4))
	{
		printf("VISA");
	}
}

int calc_sum(long long card_number)
{
	long long support_cardnr = card_number;
	int sum = 0;

	int how_long = 0;
	int counter = 0;
	while (support_cardnr > 0){
		how_long++;
		++counter;
		int support_digit = 0;
		long long digit = support_cardnr % 10;
		support_cardnr /= 10;
		if (counter == 1)
		{
			sum += digit;
			continue;
		}
		if(counter == 2)
		{
			if((digit * 2) >= 10)
			{	//x = ((6 * 2) % 10) + ((6 * 2) / 10
				//x = 3)
				support_digit = ((digit * 2) % 10)+((digit * 2)/10);
				sum += support_digit;
				counter = 0;
				continue;
			}
			else
			{	
				sum += (digit * 2);
				counter = 0;
				continue;
			}
		}
	}
	printf("%s", sum);
	return sum, how_long;
}
