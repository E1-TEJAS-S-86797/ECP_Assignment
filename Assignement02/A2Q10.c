#include<stdio.h>
int main()
{
	int c;
	printf("1.ALPHABET\n2.UPPERCASE\n3.LOWECASE\n4.DIGIT\n5.SPACE\n6.OTHER\n");
	printf("ENTER YOUR CHOICE :- \n");
	scanf("%d",&c);
	if(c==1)
	{
	    printf("--------------------------------------------------\n");
		printf("c is a letter (65 to 90 or 97 to 122)\n");
	    printf("--------------------------------------------------\n");
	}
	else if(c==2)
	{
	    printf("--------------------------------------------------\n");
		printf("c is an uppercase letter (65 to 90)\n");
	    printf("--------------------------------------------------\n");
	}
	else if(c==3)
	{
	    printf("--------------------------------------------------\n");
		printf("c is a lowercase letter (97 to 122)\n");
	    printf("--------------------------------------------------\n");
	}
	else if(c==4)
	{
	    printf("--------------------------------------------------\n");
		printf("c is a digit (48 to 57)\n");
	    printf("--------------------------------------------------\n");
	}
	else if(c==5)
	{
	    printf("--------------------------------------------------\n");
		printf("c is a space(32), tab(9), carriage return(13), new line(10)\n");
	    printf("--------------------------------------------------\n");
	}
	{
	    printf("--------------------------------------------------\n");
		printf("NOT LISTED ABOVE\n");
	    printf("--------------------------------------------------\n");
	}
 return(0);
}

