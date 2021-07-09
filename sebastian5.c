//program to check grades of a student
#include<stdio.h>
int main()
{
int a,b,c,d;	
printf("Enter the grades\n");
scanf("%d%d%d",&b,&c,&d); 


a=((b+c+d)/3);
if (a>=70&&a<=100)
{
	printf("the grade A");
}
	else if(a>=60&&a<=69)
{
printf("the grade B");
}
else if(a>=50&&a<=59)
{
printf("the grade C");
}
else if(a>=40&&a<=49)
{
printf("the grade D");
}
else
{
printf("FAIL");
}

return 0;

}