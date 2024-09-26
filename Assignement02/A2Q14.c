#include<stdio.h>
int main()
{
	int Emp_Id,Department_No;
	char Designation_Code;
	printf("ENTER YOUR EMPLOYEE ID :- \n");
	scanf("%d",&Emp_Id);
	printf("ENTER YOUR DEPARTMENT NO.:- \n");
	scanf("%d",&Department_No);
	printf("ENTER YOUR DESIGNATION CODE :- \n");
	scanf("%*c%c",&Designation_Code);
	printf("Employee With Employee Id %d Is Working In ",Emp_Id);
	switch(Department_No)
	{
		case 10 :
		printf("{MARKETING}");
		break;

		case 20 :
		printf("{MANAGEMENT}");
		break;

		case 30:
		printf("{SALES}");
		break;

		case 40 :
		printf("{DESIGNING}");
		break;
	}
	switch(Designation_Code)
	{
		case 'M' :
		printf(" Department As Manager \n");
		break;

		case 'S' :
		printf(" Department As Supervisor \n");
		break;

		case 's' :
		printf(" Department As Security Officer \n");
		break;

		case 'C' :
		printf(" Department As Clerk \n");
		break;
	}
return(0);
}

