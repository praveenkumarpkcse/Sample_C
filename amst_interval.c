#include <stdio.h>
int main()
{
 int no1,no2,i,sum,r;
 int n;
 scanf("%d%d",&no1,&no2);
 
 for(i=no1;i<no2;i++)
 { 
    sum=0;
    n=i;
   while(n!=0)
   {
       r=n%10;
       sum=sum+(r*r*r);
       n=n/10;
   }
 if(i==sum)
printf("%d ",i);
 }

}
