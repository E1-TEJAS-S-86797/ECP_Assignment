#include<stdio.h>
int main()
{	
 	float Num1,Num2,Div;
	printf("ENTER THE FIRST NUMBER :- \n");
	scanf("%f",&Num1);
	printf("ENTER THE SECOND NUMBER :-\n");
	scanf("%f",&Num2);

	if(Num2!=0)
	{
		Div = Num1/Num2;
		printf("DIVISION = %.2f\n",Div);
	}
	else 
	{
		printf("YOU ENTERED DIVIDER IS ZERO SO DIVISION OPERATION IS NOT PERFORMED!!\n");
	}
	return(0);
}
