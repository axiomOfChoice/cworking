#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

main(){

   int fahr,celsius;

   printf("Fahrenheit  Celsius\n");
   
   for (fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP){

      celsius=5*(fahr-32)/9;
      printf("%9d %8d\n",fahr,celsius);

   }
 
}
