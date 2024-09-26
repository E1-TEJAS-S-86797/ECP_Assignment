#include<stdio.h>
int main()
{
	int Num , Result = 0 , Rem ;
	printf("ENTER THE NUMBER :- \n");
	scanf("%d",&Num);
	while(Num!=0)
	{
		Rem = Num % 10;
		Result = Result * 10 + Rem;
		Num = Num / 10;
	}
	printf("REVERSED NUMBER = %d\n",Result);
	return(0);
}
