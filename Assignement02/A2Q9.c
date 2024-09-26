#include<stdio.h>
int main()
{
	int Month , Year;
	printf("ENTER THE YEAR :- \n");
	scanf("%d",&Year);
	printf("ENTER THE MONTH :- \n");
	scanf("%d",&Month);
	printf("1.JAN\n2.FEB\n3.MARCH\n4.APRIL\n5.MAY\n6.JUNE\n7.JUL\n8.AUGUST\n9.SEP\n10.OCT\n11.NOV\n12.DEC\n");
	if(Month==1||Month==3||Month==5||Month==7||Month==8||Month==10||Month==12)
	{
		printf("ENTERED MONTH = %d AND Year = %d HAVE 31 DAYS\n",Month,Year);
	}
	else if(Month==4||Month==6||Month==8||Month==11)
	{
		printf("YOU ENTERED MONTH = %d AND YEAR = %d HAVE 30 DAYS\n",Month,Year);
	}
	else 
	{
		if(Year%400==0&&Year%100!=0||Year%4==0)
		{
			printf("YOU ENTERED MONTH = %d AND YEAR = %d HAVE 29 DAYS\n",Month,Year);
		}
		else 
		{
			printf("YOU ENTERED MONTH = %d AND YEAR = %d HAVE 28 DAYS\n",Month,Year);
		}
	}


 return(0);
}
