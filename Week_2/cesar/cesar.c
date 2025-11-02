#include <stdio.h>

int cesar_code_small(char, int);
int cesar_code_big(char, int);

int main(){


	int num = 13;
	int test = num % 26;
	char a = 'a'; // 97  | 65
	char z = 'z'; // 122 | 90
	char space = ' ';
	char text[] = "Ala ma kota!"; // nfqs
	int n = 0;
	while(text[n] != '\0')
	{	
		
		if (text[n] >= 97 && text[n] <= 122)
		{
			text[n] = cesar_code_small(text[n], num);
			n++;
		}
		else if(text[n] >= 65 && text[n] <= 90)
		{	
			text[n] = cesar_code_big(text[n], num);
			n++;
		}
		else
		{
			n++;
			continue;
		}
		
	}
	printf("%s", text);
	return 0;
	

}
//p - 112
//code = 13
//weź liczbę. 
//jeżeli jest mniejsza lub równa niż 122 i większa od 97 wyświetl 
//jeżeli jes większa niż 122, odejmniej tę liczbę od 122 i dodaj do 97.
int cesar_code_small(char letter, int num){
	int letter_after_cesar = (int)letter + num;
	int support = 0;
	if (support <= 122 && support >= 97){
		return letter_after_cesar;
	}
	else if(letter_after_cesar > 122){
		support = letter_after_cesar - 123;
		letter_after_cesar = support + 97;
		return letter_after_cesar;
	}

	return letter_after_cesar;
}

int cesar_code_big(char letter, int num){
	int letter_after_cesar = (int)letter + num;
	int support = 0;
	if (support <= 90 && support >= 65){
		return letter_after_cesar;
	}
	else if(letter_after_cesar > 90){
		support = letter_after_cesar - 91;
		letter_after_cesar = support + 65;
		return letter_after_cesar;
	}

	return letter_after_cesar;
}