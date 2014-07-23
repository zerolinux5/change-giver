#include <stdio.h>

void returnChange(float inputNumber);

//Just take in number and send to function
int main(int argc, char* argv[]){
  float inputNumber = 0;
  printf("Please input amount of money: $");
  scanf("%f", &inputNumber);
  returnChange(inputNumber);
	return 0;
}

void returnChange(float inputNumber){
  printf("%f \n", inputNumber);
}