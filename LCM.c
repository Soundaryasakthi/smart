#include<stdio.h>
int lcm(int,int);
int main()
{
int x,y,l;
printf("Enter Number\n");
scanf("%d%d",&x,%y);
if(x>y)
{
l=lcm(x,y);
}
else
{
l=lcm(y,x);
}
printf("LCM of Two Number is %d",l);
return 0;
}
int lcm(int x,int y)
{
static int temp=1;
if(temp % y==0 && temp % x == 0)
return temp;
temp++;
lcm(x,y);
return temp;
}
