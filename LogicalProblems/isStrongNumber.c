//sum of the factorials of the individual digits is equal to the same number

#include<stdio.h>
int main()
{
    int n,temp,r,i,fact,sum=0;
    printf("enter the number:\t");
    scanf("%d",&n);
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
    printf("Strong number\n");
    else
    printf("Not a Strong number\n");
    return 0;
}
