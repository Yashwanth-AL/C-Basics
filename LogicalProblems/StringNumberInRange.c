#include<stdio.h>
int main()
{
   int n,temp,j,r,i,fact,sum;
    printf("enter the limit:\t");
    scanf("%d",&j);
    printf("The strong numbers in the given range are:\n");
   for(n=1;n<=j;n++)
    {
    sum=0;
    temp=n;
    while(n>0)
    {
       r=n%10;
       fact=1;
       for(i=1;i<=r;i++)
       fact*=i;
       sum+=fact;
       n=n/10;
    }
    n=temp;
    if(sum==n)
    printf("%d\n",temp);
    }
    return 0;
}
