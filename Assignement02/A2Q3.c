#include<stdio.h>
int main()
{
	int Num;
	printf("ENTER THE NUMBER TO CHECK IF IT IS +VE OR -VE :- \n");
	scanf("%d",&Num);
	if(Num>0)
	{
		printf("YOU HAVE ENTERED POSITIVE NUMBER!!\n",Num);
	}
	else
	{
		printf("YOU HAVE ENTERED NEGATIVE VALUE!!\n",Num);
	}
	return(0);
}
