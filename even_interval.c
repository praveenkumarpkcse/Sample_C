#include <stdio.h>

int main()
{
int no1,no2;
scanf("%d%d",&no1,&no2);
for(int i=no1+1;i<no2;i++)
{
    if(i%2==0)
    {
        printf("%d ",i);
    }
}
}
