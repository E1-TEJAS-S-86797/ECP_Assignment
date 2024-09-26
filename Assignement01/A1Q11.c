#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
/*
	printf("----------------------------------------------------------------------------------------------\n");
	printf("DATA TYPE|\t\tSIZE FORMAT|\t\tSPECIFIERS|\t\tRANGE|\n");
	printf("Char\t\t\t'1'\t\t\t'%%c'\t\t Range = %d - %d\n",INT_MIN,INT_MAX);
	printf("Unsigned Char\t\t'1'\t\t\t'%%c'\t\t\tRange=0-%d\n",UCHAR_MAX);
	printf("Short int\t\t'2'\t\t\t'%%hd'\t\t\n");
	printf("Unsigned Short int\t'2'\t\t\t'%%hu'\n");
	printf("Int\t\t\t'2'\t\t\t'%%d'\n");
	printf("Unsigned int\t\t'2'\t\t\t'%%u'\n");
	printf("Long int\t\t'4'\t\t\t'%%ld'\t\tRange=%ld-%ld\n",LONG_MIN,LONG_MAX);
	printf("Unsigned Long Int\t'4'\t\t\t'%%lu'\t\tRange=0-%lu\n",ULONG_MAX);
	return(0);
*/
typedef enum Data_Type{Char,Unsigned_Char,Short_Int,Unsigned_Short_Int,Int,Unsigned_Int,Long_Int,Unsigned_Long_Int,Exit,Float,Double,Long_Double}E;
E Emp;
int A;
lable :
printf("0. Char \n");
printf("1. Unsigned Char \n");
printf("1. Short Int \n");
printf("3. Unsigned Short Int \n");
printf("4. Int \n");
printf("5. Unsigned Int \n");
printf("6. Long Int \n");
printf("7. Unsigned Long Int \n");
printf("8. EXIT\n");
printf("ENTER YOUR CHOICE :- \n");
scanf("%d",&A);
if(A==8)
{
	goto here;
}
printf("----------------------------------------------------------------------------------------------\n");
printf("Data Type\t\tSize\tFormat Specifiers\tRange\n");
printf("----------------------------------------------------------------------------------------------\n");
switch(A)
{
	case 0 :
	printf("Char\t\t\t'1'\t'%%c'\t\t\t%d To %d\n",INT_MIN,INT_MAX);
	break ;
	case 1 :
	printf("Unsigned Char\t\t'1'\t'%%c'\t\t\t0-%d\n",UCHAR_MAX);
	break;
	case 2 :
	printf("Short int\t\t'2'\t'%%hd'\t\t\t%d-%d",SHRT_MIN,SHRT_MAX);
	break;
	case 3 :
	printf("Unsigned Short int\t'2'\t'%%hu'\t\t\t0 To 35535\n");
	break;
	case 4 :
	printf("Int\t\t\t'2'\t'%%d'\t\t\t-32768 To 32767\n");
	break;
	case 5 :
	printf("Unsigned int\t\t'2'\t'%%u'\t\t\t0 To 65535\n");
	break;
	case 6 :
	printf("Long int\t\t'4'\t'%%ld'\t\t\t%ld-%ld\n",LONG_MIN,LONG_MAX);
	break;
	case 7 :
	printf("Unsigned Long Int\t'4'\t'%%lu'\t\t\tRange=0-%lu\n",ULONG_MAX);
	break;
	here :
	case 8 :
	printf("!!THANK YOU EXECUTION IS END!!\n");
	break;
	default :
	printf("SORRY!!INVALID CHOICE\n");
}
	if(A!=8)
	{
		goto lable;
	}

return(0);

}
