#include<stdio.h>
int main()
{
  int year;
  printf("ENTER THE YEAR :- \n");
  scanf("%d",&year);
  if(  year % 400 == 0 )
	{
		printf("1.Leap year \n");
	}
	//           0     != 0  => false
	else if(year % 100 == 0 )
	{
		printf("2.Not leap year \n");
	}
	//  1900 % 4 == 0
	else if(year % 4 == 0)
	{
		printf("3.leap year \n");
	}
	else
	{
		printf("4. Not- leap year \n");
	}
return(0);
 }
