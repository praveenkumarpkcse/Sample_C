#include <stdio.h>

int main()
{
int number,count;
scanf("%d",&number);

for(int i=1;i<=number;i++)
{
if(number%i==0)
{
    count++;
}
}
if(count==2)
{
    printf("yes");
}
else
{
    printf("no");
}
}
