#include <stdio.h>

int main()
{
int number , no1,sum=0,rem;
scanf("%d",&number);
no1=number;

while(number>0)
{
    rem=number%10;
    sum=sum*10+rem;
    number=number/10;
}
if(sum==no1)
{
    printf("yes");
}
else
{
    printf("no");
}
}
