#include <stdio.h>

int main(void){
  unsigned int current_year, current_month, current_day, birth_year, birth_month, birthday, age;
  printf("%s","Enter current year: ");
  scanf("%u", &current_year);

  printf("%s", "Enter current month (1 - 12): ");
  scanf("%u", &current_month);

  printf("%s", "Enter current day(1 - 31): ");
  scanf("%u", &current_day);
  
  printf("%s", "Enter birth year: ");
  scanf("%u", &birth_year);

  printf("%s", "Enter birth month (1 - 12): ");
  scanf("%u", &birth_month);

  printf("%s", "Enter birth day(1 - 31): ");
  scanf("%u", &birthday);

  age = current_year - birth_year;
  if (current_month < birth_month){ // if we haven't gotten to birth month
    puts("running 1");
    age -= 1;
  }
  else if (current_month > birth_month){ // if we have passed birth month
    puts("running 2");
    age;
  }
  else if(current_month == birth_month){
    puts("running 3");
    if (current_day < birthday){
      puts("running 3.1");
      age -=1;
    }
    else if (current_day > birthday){
      puts("running 3.2");
      age;
    }
    else if (current_day == birthday){
      puts("running 3.3");
      age;
    }
  }
  
  // computing max heart rate
  int maxHeartRate = 220 - age;

  // computing lower target for heart rate
  float lower_target = (50.0/100.0) * maxHeartRate;
  
  // computing upper target for heart rate
  float upper_target = (85.0/100.0) * maxHeartRate;

  printf("Your age is %u\nYour max heart rate is %d", age, maxHeartRate);

  printf("\nThe target lower limit of your heart rate is %.2f: ", lower_target);
  printf("\nThe target upper limit of your heart rate is %.2f: ", upper_target);
}