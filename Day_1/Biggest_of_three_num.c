#include<stdio.h>
void main()
{
  int a=10,b=20,c=15;
if(a>=b && a>=c)//checks that a is bigger than b,c
{
printf(a,"is a biggest number");//prints if a is bigger than others
}
else if(b>=a && b>=c)//checks that b is bigger than a,c
{
printf(b,"is a biggest number");//prints if b is bigger than others
}
else
{
printf(c,"is a biggest number");//if a,b are nat biggest than c is biggest number
}
}
