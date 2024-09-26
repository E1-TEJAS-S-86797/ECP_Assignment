#include<stdio.h>
typedef struct Student
{
	char stud_name[30];
	char stud_stream[30];
	int stud_roll_no;
	int stud_standard;
	float stud_marks;
}Std_t;
void Accept_Stud(Std_t *Std);
void Print_Stud(Std_t *std);
int main()
{
	int Choice;
	Std_t Std;
	do
	{
		printf("--------------------------------------------{MENU}--------------------------------------------------\n");
		printf("1.ACCEPT STUDENT : \n");
		printf("2.PRINT STUDENT  : \n");
		printf("ENTER YOUR CHOICE : \n");
		scanf("%d",&Choice);
		switch(Choice)
		{
			case 1 :
			Accept_Stud(&Std);
			break;

			case 2 :
			Print_Stud(&Std);
			break;
		}
	}while(Choice!=0);
return(0);
}

void Accept_Stud(Std_t *Std)
{
	printf("ENTER THE STUDENT NAME : \n");
	scanf("%s",Std->stud_name);
	printf("ENTER THE STUDENT STREAM : \n");
	scanf("%s",Std->stud_stream);
	printf("ENTER THE STUDENT ROLL NO : \n");
	scanf("%d",&Std->stud_roll_no);
	printf("ENTER THE STUDENT STANDARD : \n");
	scanf("%d",&Std->stud_standard);
	printf("ENTER THE STUDENT MARKS : \n");
	scanf("%f",&Std->stud_marks);
}
void Print_Stud(Std_t *Std)
{
	
	printf("STUDENT NAME : %s\n",Std->stud_name);
	printf("STUDENT STREAM : %s\n",Std->stud_stream);
	printf("STUDENT ROLL NO : %d\n",Std->stud_roll_no);
	printf("STUDENT STANDARD : %d\n",Std->stud_standard);
	printf("STUDENT MARKS : %.2f\n",Std->stud_marks);
}
