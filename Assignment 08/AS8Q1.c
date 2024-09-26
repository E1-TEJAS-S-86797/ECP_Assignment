#include<stdio.h>
typedef struct Student 
{
	int Stud_Roll_No;
	char Stud_Name[30];
	int Stud_Std;
	float Stud_Marks;
	char Stud_Stream[30];
}Stud_t;
int main()
{
	Stud_t Std;
	printf("ENTER THE STUDENT ROLL NO : \n");
	scanf("%d",&Std.Stud_Roll_No);
	printf("ENTER THE STUDENT NAME : \n");
	scanf("%s",Std.Stud_Name);
	printf("ENTER THE STUDENT STANDARD : \n");
	scanf("%d",&Std.Stud_Std);
	printf("ENTER THE STUDENT MARKS : \n");
	scanf("%f",&Std.Stud_Marks);
	printf("ENTER THE STUDENT STREAM : \n");
	scanf("%s",Std.Stud_Stream);


	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("-----------------------------------------------------------{STUDENT RECORD}----------------------------------------------------------\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");

	printf("STUDENT ROLL NO  : %d\n",Std.Stud_Roll_No);
	printf("STUDENT NAME     : %s\n",Std.Stud_Name);
	printf("STUDENT STANDARD : %d\n",Std.Stud_Std);
	printf("STUDNET MARKS    : %.2f\n",Std.Stud_Marks);
	printf("STUDENT STREAM   : %s\n",Std.Stud_Stream);


	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
}

