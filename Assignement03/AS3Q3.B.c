#include<stdio.h>
int main()
{
	int Result = 0, Num , Ori_Num , Rem ;
	printf("ENTER THE NUMBER :- \n");
	scanf("%d",&Num);
	Ori_Num = Num;
	while(Ori_Num != 0)
	{
		Rem = Ori_Num % 10;
		Result = Result + Rem* Rem * Rem ;
		Ori_Num = Ori_Num/10;
	}
	if(Result == Num)
	{
		printf("ENTERED NUMBER IS PALINDROME!!\n");
	}
	else 
	{
		printf("ENTERED NUMBER IS NOT PALINDROME!!\n");
	}
	return(0);
}
