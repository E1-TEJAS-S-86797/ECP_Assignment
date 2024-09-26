#include<stdio.h>
int main()
{
	int Num,i,Fact = 1;
	printf("ENTER THE NUMBER :- \n");
	scanf("%d",&Num);
	for(i=1;i<=Num;i++)
	{
		Fact = Fact * i;
		printf("FACTORIAL OF %d IS %d \n",Num,Fact);
	}
	return(0);
}
