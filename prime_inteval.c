
#include <stdio.h>

int main()
{

int no1,no2,count;
scanf("%d%d",&no1,&no2);

for(int i=no1+1;i<no2;i++)
{
    count=0;
    for(int j=1;j<=i;j++)
    {
    if(i%j==0)
    {
        count++;
    }
    
}
if(count==2)
    {
        printf("%d ",i);
    }
  
}
}
