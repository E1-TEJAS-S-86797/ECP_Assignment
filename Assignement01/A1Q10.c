#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,S;
   printf("ENTER THE FIRST SIDE OF TRIANGLE :- \n");
   scanf("%f",&a);
   printf("ENTER THE SECOND SIDE OF TRIANGLE :- \n");
   scanf("%f",&b);
   printf("ENTER THE THIRD SIDE OF TRIANGLE :- \n");
   scanf("%f",&c);

   S = a+b+c*a+b+c;
   printf("PERIMETER OF TRIANGLE = %.2f\n",S);

    float B = S*(S-a)*(S-b)*(S-c);
	sqrt(B);
	printf("AREA OF TRIANGLE = %.2f\n",B);

	return(0);
}
   
