#include <stdio.h>

int main(void){
  float currentWordPopulation;
  printf("%s", "\nEnter Current World Population: ");
  scanf("%f", &currentWordPopulation);

  float annualGrowthrate;
  printf("%s", "Enter Annual World Population: ");
  scanf("%f", &annualGrowthrate);

  float growthrate = (1+(annualGrowthrate/100));

  printf("the growth rate per year is %f", growthrate);
  // computing growth rate to the power of no_of_years

  float power;
  unsigned int index, noYears;
  printf("%s", "\nEnter No. of Years: ");
  scanf("%d", &noYears);
  
  // initialize index and power
  index = 1;
  power = 1;
  
  while(index<=noYears){
    power *= growthrate;
    ++index;
  }
  
  printf("After %u years, the growth rate is %f", noYears, power);

  // calculating the estimated population
  float estimatedPopulation;
  estimatedPopulation = currentWordPopulation * power;

  printf("\nThe Estimated Poulation after %u of years is %.2f\n", noYears, estimatedPopulation);

}