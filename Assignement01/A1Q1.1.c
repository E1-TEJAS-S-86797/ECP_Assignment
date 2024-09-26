#include<stdio.h>
int main()
{
	int Num1,Num2,Sum,Sub,Mul;
	printf("ENTER THE FIRST NUMBER :- \n");
	scanf("%d",&Num1);
	printf("ENTER THE SECOND NUMBER :- \n");
	scanf("%d",&Num1);
	Sum = Num1+Num2;
	Sub = Num1-Num2;
	Mul = Num1*Num2;
	printf("ADDITION = %d\n",Sum);
	printf("SUBTRACTION = %d",Sub);
	printf("MULTIPLICATION = %d\n :-",Mul);
	printf("--------------------------------------------------------------------------------\n");
 	char Ch1,Ch2,Addition,Subtraction,Multiplication;
	printf("ENTER THE FIRST CHARACTER :-\n");
	scanf("%*c%c",&Ch1);
	printf("ENTER THE FIRST CHARACTER :-\n");
	scanf("%*c%c",&Ch1);

	Sum = Ch1+Ch2;
	Sub = Ch1-Ch2;
	Mul = Ch1*Ch2;


	printf("Sum = %d\n",Addition);
	printf("Sub = %d\n",Subtraction);
	printf("MUL = %d\n :-",Multiplication);

	return(0);
	
	
}
