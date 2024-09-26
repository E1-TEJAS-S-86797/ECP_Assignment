#include<stdio.h>
int main()
{
   float Cel;
	printf("{---------------------------------------------CELSIUS TO FAHRENHEIT}---------------------------------------------------------------------\n");
   printf("ENTER THE TEMPERATURE VALUE IN CELCIUS :- \n");
   scanf("%f",&Cel);
   float Far = (Cel*(float)9/5)+32;
   printf("CELSIUS TO FAHRENHEIT = %.2f\n",Far);

   printf("----------------------------------------------{FAHRENHEIT TO CELSIUS}----------------------------------------------------");
   float F1;
   printf("ENTER THE VALUE IN FAHRENHEIT :- \n");
   scanf("%f",&F1);
   float Cel1 = (float)5/9*(F1-32);  
   printf("FAHRENHEIT TO CELSIUS = %.2f\n",Far);
   return(0);
}
