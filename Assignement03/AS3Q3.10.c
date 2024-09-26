#include<stdio.h>
int main()
{
	int Num , i;
	printf("ENTER THE NUMBER :- \n");
	scanf("%d",&Num);
	for(i=1;i<=10;i++)
	{
		printf("|%d| * |%d| = |%d|\n",Num,i,Num*i);
	}
	return(0);
}
