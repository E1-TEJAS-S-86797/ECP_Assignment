#include<stdio.h>
int main()
{
  float Num1,Num2,Num3;
  printf("ENTER THE FIRST NUMBER :- \n");
  scanf("%f",&Num1);
  printf("ENTER THE SECOND NUMBER :- \n");
  scanf("%f",&Num2);
  printf("ENTER THE THREE NUMBER :- \n");
  scanf("%f",&Num3);

  float AVERAGE = (Num1+Num2+Num3)/3;
  printf("AVERAGE OF THREE NUMBERS = %.2f\n",AVERAGE);
  return(0);
}

