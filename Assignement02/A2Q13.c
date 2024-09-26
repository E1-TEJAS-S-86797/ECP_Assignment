#include<stdio.h>
int main()
{
    int Op;
	float Num1,Num2,Res;
	label :
	printf("-----------------------------------------{OPERATIONS}-------------------------------------------------------\n");
	printf("ENTER THE FIRST NUMBER :- \n");
	scanf("%f",&Num1);
	printf("ENTER THE SECOND NUMBER :- \n");
	scanf("%f",&Num2);
	printf("------------------------------------------------------------------------------------------------------------\n");
	printf(" 1.ADDITION\n2.DIVISION\n3.MULTIPLICATION\n4.SUBTRACTION\n");
	printf("------------------------------------------------------------------------------------------------------------\n");
	printf("ENTER YOUR CHOICE TO PERFORM THE OPERATION :- ");
	scanf("%d",&Op);
	switch(Op)
	{
		case 1 :
		Res = Num1 + Num2;
		printf("ADDITION = %f\n",Res);
		break;

		case 2 :
		if(Num1!=0)
		{	
			Res = Num1/Num2;
			printf("DIVISION = %.2f\n",Res);
		}
		else
		{
			printf("YOU HAVE ENTERED ZERO IN DIVIDER SO THAT DIVISION OPERATION CANT PERFORMED!!\n");
		}
		break;

		case 3 :
		Res = Num1 * Num2;
		printf("MULTIPLICATION = %f\n",Res);
		break;

		case 4 :
		Res =  Num1 - Num2;
		printf("SUBTRACTION = %f\n");
		break;

		default :
		printf("YOU HAVE ENTERED INVALID OPERATION!!\n");
		if(Op==5)
		{
			goto label;
		}
	}
	return(0);
}

