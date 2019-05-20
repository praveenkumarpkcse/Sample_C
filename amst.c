#include <stdio.h>

int main()
{
int number,rem;
int sum=0;
scanf("%d",&number);
int n=number;
while(number>0)
{
    rem=number%10;
    number=number/10;
    sum=sum+rem*rem*rem;
}
   if (n==sum)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
   
}
