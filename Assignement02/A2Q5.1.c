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

	(Num1>Num2)?(Num1>Num3)?(printf("FIRST NUMBER IS GREATEST!!\n")):(printf("THIRD NUMBER IS GREATEST!!\n")):(Num2>Num3)?(printf("SECOND NUMBER IS GREATEST!!\n")):(printf("THIRD NUMBER IS GREATEST!!\n"));

	return(0);
}
