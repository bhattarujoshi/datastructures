#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter the values");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
if(a>c)
{
printf("A is Greater");
}
else
{
printf("C is Greater");
}
}
else
{
if (b>c)
{
printf("B is Greater");
}
else
{
printf("C is Greater");
}
}
getch();
}