#include<stdio.h>
void main()
{
int num,temp,count=0;
printf("enter an integer");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
temp=temp/10;
++count;
}
printf("number of digits in %d:%d",num,count);
getch();
return 0;
}
