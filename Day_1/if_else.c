#include<stdio.h>
void main()
{
  int age;
printf("Enter your age:");
scanf("%d",&age);
if(age>=18)://check the age if age is less than or equal to 18 then the person is not eligible for vote other wise eligible for vote
{
printf("Eligible for vote");//prints if persons age is greater than or equal to 18
}
else
{
print("Not eligible for vote");//print if person age is less than 18
}
}

