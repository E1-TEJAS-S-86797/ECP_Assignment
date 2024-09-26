#include<stdio.h>
int main()
{
	int Num1,Num2;
	printf("ENTER FIRST NUMBER TO CHECK :- \n");
	scanf("%d",&Num1);
	printf("ENTER SECOND NUMBER TO CHECK :-\n");
	scanf("%d",&Num2);
	if(Num1>Num2)
	{
		printf("FIRST NUMBER IS GREATEST!!\n");
	}
	else
	{
		printf("SECOND NUMBER IS GREATEST!!\n");
	}
	return(0);
}

