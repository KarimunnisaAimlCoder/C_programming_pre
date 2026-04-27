#include<stdio.h>
int main()
{
  int n,i,a=0,b=1,next;
printf("How many terms?:");
scanf("%d",&n);
if(n<=0)
{
  printf("please enter a positive number!");
}
else if(n==1)
{ 
  printf("fibonacci series:%d",a);
}
else
{
  printf("fibonacci series:%dv%d",a,b);
for(i=3;i<n;i++)
{
 next=a+b;
 printf("%d",next);
 a=b;b=next;
}
}
return 0;
}
