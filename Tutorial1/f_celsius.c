#include <stdio.h>

main(){

   int fahr,celsius;
   int lower,upper,step;

   lower=0;
   upper=300;
   step=20;

   fahr=lower;

   printf("Fahrenheit  Celsius\n");
   
   while (fahr<=upper){
      
      celsius=5*(fahr-32)/9;
      printf("%9d %8d\n",fahr,celsius);
      fahr=fahr+step;

   }
 
}
