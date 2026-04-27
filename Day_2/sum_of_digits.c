#include<stdio.h>
int main()
{
  int n,sum=0,rem;
printf("Enter a number:");
scanf("%d",&n);
int temp=n;
while(n>o)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("sum of digits of %d=%d",temp,sum);
return 0;
}
