#include <stdio.h>

int main(void){
  unsigned int x, y, power, index;
  printf("%s", "Enter first integer: ");
  scanf("%u", &x);
  printf("%s", "Enter second integer: ");
  scanf("%u", &y);

  // initialize index and power
  index = 1;
  power = 1;
  while(index<=y){
    power *= x;
    ++index;
  }

  printf("%u",power);
}