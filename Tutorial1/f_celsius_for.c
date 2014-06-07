#include <stdio.h>

main(){

   int fahr,celsius;

   printf("Fahrenheit  Celsius\n");
   
   for (fahr=300;fahr>=0;fahr=fahr-20){

      celsius=5*(fahr-32)/9;
      printf("%9d %8d\n",fahr,celsius);

   }
 
}
