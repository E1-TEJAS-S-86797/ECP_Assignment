#include<stdio.h>
int main()
{
	int Expo,Base,Power = 1;
	printf("ENTER THE EXPO :- \n");
	scanf("%d",&Expo);
	printf("ENTER THE BASE :- \n");
	scanf("%d",&Base);
 
    //To calculate the power of positive exponents
    for(int i=Expo;i>0;i--)
    {
        Power = Power * Base;
    }
    printf("%d ^ %d = %d", Base, Expo, Power);
 
    return 0;
}
