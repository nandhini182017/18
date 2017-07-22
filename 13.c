#include<stdio.h>
void main()
{
int i=2,n;
printf("enter n value");
scanf("%d",&n);
while(i<=n-1)
{
if((n%i)==0)
printf(not prime number");
else
i=i+1;
}
if(i=n)
printf("prime number");
else
printf("not prime");
}
