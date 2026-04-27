#include<stdio.h>
void main()
{
int n,rev=0,rem;
printf("Enter a number to reverse:");
scanf("%d",&n);
int temp=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("Reverse of %d=%d",temp,rev);
return 0;
}
