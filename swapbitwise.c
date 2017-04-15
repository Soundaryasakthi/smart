#include<stdio.h>
void main()
{
long i,k;
printf("Enter two integer\n");
scanf("%ld%ld",&i,&k);
printf("\nBefore Swapping i=%ld and k=%ld",i,k);
i=i^k;
k=i^k;
i=i^k;
printf("\nAfter Swapping i=%ld and k=%ld",i,k);
}
