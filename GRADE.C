#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter the value :");
scanf("%d",&a);
if (a==100)
{
printf("GRADE is S");
}
else if (a>90)
{
printf("GRADE is A");
}
else if (a>80)
{
printf("GRADE is B");
}
else if (a>70)
{
printf("GRADE is C");
}
else if (a>60)
{
printf("GRADE is D");
}
else if (a>50)
{
printf("GRADE is E");
}
else if (a<50)
{
printf("GRADE is U");
}
getch();
}