#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter any positive integer:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("The factorial of a given number is:%d\n",fact);
    return 0;
}
