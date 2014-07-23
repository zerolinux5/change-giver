#include <stdio.h>

//function stub
void returnChange(double, double);

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
  printf("Cost:%lf amount given:%lf \n", cost, given);
}