#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("Enter a Number");
scanf("%d",&a);
if(a>0)
printf("The number is Positive");
else if(a<0)
printf("The number is negative");
else
printf("You entered zero");
getch();
return 0;
}
