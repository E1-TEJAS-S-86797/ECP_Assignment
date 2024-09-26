#include<stdio.h>
int main()
{
	int Num,Rev=0;
	int digit,p;
	printf("ENTER THE FIVE DIGIT NUMBER :- \n");
	scanf("%d",&Num);
	p=Num;
	do
	{
	     digit = Num%10;
		 Rev = Rev*10+digit;
		 Num = Num/10;
	}
	while(Num!=0);
	{
		printf("THE REVERSE NUMBER IS %d \n",Rev);
		if(p==Rev)
		{
			printf("NUMBER IS PALINDROME\n");
		}
	}
	return(0);
}
	    
