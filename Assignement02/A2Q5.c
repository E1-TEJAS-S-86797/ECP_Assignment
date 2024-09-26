#include<stdio.h>
int main()
{
	int Num1,Num2,Num3;
	printf("ENTER FIRST NUMBER :- \n");
	scanf("%d",&Num1);
	printf("ENTER SECOND NUMBER :- \n");
	scanf("%d",&Num2);
	printf("ENTER THIRD NUMBER :- \n");
	scanf("%d",&Num3);
	if(Num1>Num2)
	{
		if(Num1>Num3)
		{
			printf("FIRST NUMBER IS GREATEST!!\n");
		}
		else 
		{
			printf("THIRD NUMBER IS GREATEST!!\n");
		}
   }
   else 
   {
   		if(Num2>Num3)
		{
			printf("SECOND NUMBER IS GREATES!!\n");
		}
		else 
		{
			printf("THIRS NUMBER IS GREATES!!\n");
		}
   }
  return(0);

}
