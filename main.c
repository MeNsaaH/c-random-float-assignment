#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h> 

/* 
 * Simple program to random floating values
 */

double generate_random_float(int limit){
  // Generate random number using time as the seeder
  
  srand(time(NULL)); // From <stdlib.h> and <time.h>

  double random_number = (double) (rand() % limit); // From <stdlib.h>

  // Get a random decimal by taking log of a random number
  double random_decimal = log((double) rand()); // From <math.h>

  return  random_number + random_decimal;
}


int main(){
  int limit;

  printf("Random Float Generator\n"); // From <stdio.h>
  printf("Input random number limit\n");
  // Read User Input
  scanf("%d", &limit); // From <stdio.h>

  if (isalpha(limit)){ // From <ctype.h>
    printf("Random Number Limit should be a digit");
    return 0;
  }

  double random_float = generate_random_float(limit);

  printf("\n\nRandom Number is %f\n", random_float);
}
