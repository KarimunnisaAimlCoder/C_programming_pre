#include<stdio.h>
int main()
{
  int n;
int fact=1;
printf("Enter a number to find factorial");
scanf("%d",&n);
if(n<0)
{
  printf("Negative number has no factorila");
}
else if(n==0)
{
  printf("factorial of 0=1");
}
else
{
for(int i=1;i<=n;i++)
{
fact=fcat*i;//factorial logic
}
printf("factorial of an given %d is:%d",n,fact);//prints factorial
}
}
