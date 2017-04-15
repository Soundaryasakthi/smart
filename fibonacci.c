#include<stdio.h>
int main()
{
int a,f1=0,f2=1,next,i;
printf("Enter the number\n");
scanf("%d",&a);
printf("First %d terms are\n",a);
for(i=0;i<a;i++)
{
if(i<=1)
next=i;
else
{
next=f1+f2;
f1=f2;
f2=next;
}
printf("%d\n",next);
}
return 0;
}
