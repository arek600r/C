#include <stdio.h>
const int quarter = 25;
const int dimes = 10;
const int nickles = 5;
const int pennies = 1;

int get_value();
int count_change(int n);

int main(){
  int val; 
  val = get_value();

  int count = count_change(val);
  printf("%d", count);
  
  return 0;
}

int count_change(int val){
  int counter = 0;
  int val_a = val;
  while(val_a > 0){
    if ((val_a - quarter) >= 0)
    { 
      val_a = val_a - quarter;
      counter++;
      continue;
    }
    else if ((val_a - dimes) >= 0)
    {
      val_a = val_a - dimes;
      counter++;
      continue;
    }
    else if ((val_a - nickles) >= 0)
    {
      val_a = val_a - nickles;
      counter++;
      continue;
    }
    else if ((val_a - pennies) >= 0)
    {
      val_a = val_a - pennies;
      counter++;
      continue;
    }
    else
    {
      break;
    }
  }

  return counter;
}



int get_value(){
  int value;
  do{
    printf("Change owed: ");
    scanf("%d", &value);
  }while(value < 1);
  
  return value;
}

