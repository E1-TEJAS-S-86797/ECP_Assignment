#include<stdio.h>
void swap_num(int *pNum1 , int *pNum2);
int main()
{
	int Num1,Num2;
	printf("ENTER THE NUMBER 1 : \n");
	scanf("%d",&Num1);

	printf("ENTER THE NUMBER 2 : \n");
	scanf("%d",&Num2);

	printf("BEFORE SWAP IN MAIN FUNCTION :: %d :: %d\n",Num1,Num2);
	swap_num(&Num1,&Num2);	
	printf("AFTER SWAP IN MAIN FUNCTION :: %d :: %d\n",Num1,Num2);
}

void swap_num(int *pNum1 , int *pNum2)
{
	int Temp;
	printf("BEFORE SWAP IN SWAP FUNCTION :: %d :: %d\n",*pNum1,*pNum2);
	Temp  = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 =  Temp;
	printf("AFTER SWAP IN SWAP FUNCTION :: %d :: %d\n",*pNum1,*pNum2);
}
