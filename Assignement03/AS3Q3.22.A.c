#include<stdio.h>
int main()
{
	int Num,i,j;
	printf("ENTER THE NUMBER OF ROWS YOU WANT :- ");
	scanf("%d",&Num);
	for(i=1;i<=Num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return(0);
}
