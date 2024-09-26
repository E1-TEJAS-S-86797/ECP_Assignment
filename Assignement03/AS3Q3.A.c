#include<stdio.h>
int main()
{
	int Num,Ori_Num,Reverse=0,Rem;
	printf("ENTER THE NUMBER :- \n");
	scanf("%d",&Num);
	Ori_Num = Num;
	while(Num!=0)
	{
		Rem = Num%10;
		Reverse = Reverse * 10 + Rem;
		Num = Num/10;
	}
	if(Ori_Num==Reverse)
	{
		printf("YOU ENTRED NUMBER IS PALINDROME %d :- \n",Ori_Num);
	}
	else 
	{
		printf("YOU ENTRED NUMBER IS NOT PALINDROME %d :- \n",Ori_Num);
	}
	return(0);
}
