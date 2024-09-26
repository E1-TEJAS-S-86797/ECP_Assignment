#include<stdio.h>
int main()
{
	int Num,Fact = 1,i=1;
	printf("ENTER THE NUMBER TO CALCULATE FACTOR :- \n");
	scanf("%d",&Num);
	while(i<=Num)
	{
		Fact = Fact * i;
		i++;
	}
	printf("FACT OF %d IS %d :- \n",Num,Fact);
	return(0);
}
