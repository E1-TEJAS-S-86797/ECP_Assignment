#include<stdio.h>
int main()
{
	int Num,Sum=0,Rem;
	printf("ENTER THE NUMBER :- \n");
	scanf("%d",&Num);
	while(Num!=0)
	{
		Rem = Num%10;
		Sum = Sum + Rem;
		Num = Num / 10;
	}
	printf("THE SUM OF IS %d :- ",Sum);
	return(0);
}
