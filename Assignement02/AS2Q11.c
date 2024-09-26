#include<stdio.h>
int main()
{
	int CO1,CO2;
	printf("ENTER THE FIRST CO-ORDINATE :-\n");
	scanf("%d",&CO1);
	printf("ENTER THE SECOND CO-ORDINATE :-\n");
	scanf("%d",&CO2);
	if(CO1>0&&CO2>0)
	{
		printf("YOU ENTERED CO-ORDINATE :- %d AND %d LIES IN FIRST QUADRANT\n",CO1,CO2);
	}
	else if(CO1<0&&CO2>0)
	{
		printf("YOU ENTERED CO-ORDINATE :- %d AND %d LIES IN SECOND QUADRANT\n",CO1,CO2);
	}
	else if(CO1<0&&CO2<0)
	{	
		printf("YOU ENTERED CO-ORDINATE :- %d AND %d LIES IN THIRD QUADRANT\n",CO1,CO2);
	}
	else if(CO1>0&&CO2<0)
	{
		printf("YOU ENTERED CO-ORDINATE :- %d AND %d LIES IN FOURTH QUADRANT\n",CO1,CO2);
	}
	else 
	{
		printf("YOU ENTERED CO-ORDINATE :- %d AND %d LIES ON ORIGIN\n");
	}
	return(0);
}
