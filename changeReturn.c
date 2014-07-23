#include <stdio.h>

//function stub
void returnChange(double, double);
double makeChange(double, double);

//Just take in number and send to function
int main(int argc, char* argv[]){
  double cost = 0;
  double given = 0;

  //taking in numbers
  printf("Please input cost: $");
  scanf("%lf", &cost);
  printf("\n");
  printf("Please input amount given: $");
  scanf("%lf", &given);

  //call to function
  returnChange(cost, given);
	return 0;
}

//give return change
void returnChange(double cost, double given){
  double change = given - cost;

  //temporary solution
  if (change < 0){
    printf("Can't give less than cost!\n");
    return;
  }

  //change and number of coins given
  printf("Change: $%lf \n", change);
  makeChange(makeChange(makeChange(makeChange(change, 0.25), 0.10), 0.05), 0.01);
}


double makeChange(double change, double changeValue){
  int numberofCoins = 0;
  while(change - changeValue >= 0){
    numberofCoins++;
    change -=changeValue;
  }
  int switchInt = changeValue*100;
  switch(switchInt){
    case 25:
      printf("Number of quarters: %d\n", numberofCoins);
      break;
    case 10:
      printf("Number of dimes: %d\n", numberofCoins);
      break;
    case 5:
      printf("Number of nickles: %d\n", numberofCoins);
      break;
    case 1:
      printf("Number of pennies: %d\n", numberofCoins);
      break;

  }
  return change;
}
