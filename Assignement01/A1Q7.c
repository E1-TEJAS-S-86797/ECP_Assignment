#include<stdio.h>
int main()
{
 	int Num,r1,r2,r3,r4;
	printf("ENTER THE NUMBER :- \n");
	scanf("%d",&Num);
    // EXAMPLE TO REVERSE THE NUMBER 
	r1 = Num%10;  //1
	r2 = (Num/10)%10;//6
	r3 = (Num/100)%10;//3
	r4 = (Num/1000)%10;//9

	printf("\n %d\t %d\t %d\t %d\t\n",r4,r3,r2,r1);  // THIS WILL GIVE YOU 9    6    3     1
	printf("%d = %d + %d + %d + %d",Num,r4*1000,r3*100,r2*10,r1); // THIS WILL PRINT OUTPUT - 9631 = 9000 + 300 + 60 + 1
	printf("%d\n",(r1*1000+r2*100+r3*10+r4)); // THIS WILL PRINT NUMBER IN REVERSE OREDER - 1369
	
	return(0);
}
