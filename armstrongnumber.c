#include<stdio.h>
#include<stdlib.h>
int main()
{
int x,n,y=0,t;
printf("Enter the number\n");
scanf("%d",&n);
t=n;
while(n>0)
{
x=n%10;
y=y+x*x*x*;
n=n/10;
}
if(y==t)
{
printf("Armstrong Number\n");
}
else
{
printf("Not a Armstrong Number\n");
}
  getch();
return 0;
}
