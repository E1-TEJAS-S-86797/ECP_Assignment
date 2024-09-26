#include<stdio.h>
int main()
{
	int Num,i=1;
	char Ch ;
	printf("ENTER THE NUMBER OF CHARACTERS YOU WANT :- \n");
	scanf("%d",&Num);
	printf("ENTER WHICH CHARACTER YOU WANT :- \n");
	scanf("%*c%c",&Ch);

	while(i<=Num)
	{
		printf(" %c ",Ch);
		i++;
	}

	return(0);
}
