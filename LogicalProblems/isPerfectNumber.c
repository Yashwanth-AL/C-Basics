//sum of its proper divisors is equal to the same number is called perfect number.

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=n;
    }
    if(sum==n)
        printf("Perfect Number\n"); 
    else
        printf("Not a perfect number\n");
    return 0;
}
