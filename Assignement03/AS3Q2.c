#include<stdio.h>
int main()
{
	 int Num;
	int i=1;
	printf("ENTER THE NUMBER :- \n");
	scanf("%d",&Num);
	while(i<=10)
	{
		printf("|%d| * |%d| = |%d|\n",Num,i,Num);
		i++;
	}
	return(0);
}
