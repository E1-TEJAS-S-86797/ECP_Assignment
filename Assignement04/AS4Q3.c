#include<stdio.h>
// FUNCTION DECLARATION 
int Add_Num(int Num1,int Num2);
int Sub_Num(int Num1, int Num2);
int Mul_Num(int Num1,int Num2);
int Div_Num(int Num1, int Num2);
// FUNCTION CALL
int main()
{
	int Num1,Num2;
	printf("ENTER TWO NUMBERS :- \n");
	scanf("%d%d",&Num1,&Num2);
	typedef enum Operation{ADDITION=1,SUBTRACTION,MULTIPLICATION,DIVISION}O;
	O E1;
	printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
	printf("ENTER YOUR CHOICE :- \n");
	scanf("%d",&E1);
	switch(E1) 
	{
	    case 1 :
		int Addition = Add_Num(Num1,Num2);
		printf("SUM = %d\n",Addition);
		break;
	
		case 2 :
		int Subtraction = Sub_Num(Num1,Num2);
		printf("SUB = %d\n",Subtraction);
		break ;

		case 3 :
		int Multiplication = Mul_Num(Num1,Num2);
		printf("MUL = %d\n",Multiplication);
		break;
	
		case 4 :
		int Division = Div_Num(Num1,Num2);
		printf("DIV = %d\n",Division);
		break;
	}
}
//FUNCTION DEFINITION 

int Add_Num(int Num1,int Num2)
{
	return Num1 + Num2;
}
int Sub_Num(int Num1,int Num2)
{
	return Num1 - Num2;
}
int Mul_Num(int Num1,int Num2)
{
	return Num1 * Num2;
}
int Div_Num(int Num1,int Num2)
{
	if(Num2!=0)
	{
		return Num1 / Num2;
	}
	else
	{
		printf("DIVISION BY ZERO ERROR!!\n");
	}
}
