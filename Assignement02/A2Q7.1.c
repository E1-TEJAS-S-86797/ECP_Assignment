#include<stdio.h>
int main()
{
	int Year;
	printf("ENTER THE YEAR :- \n");
	scanf("%d",&Year);
	if(Year%400==0&&Year%100!=0||Year%4==0)
	{
	    printf("ENTERED YEAR IS  LEAP YEAR!!\n");
	}
	else 
	{
		printf("ENTERED YEAR IS NOT LEAP YEAR!!\n");
	}
return(0);
}

