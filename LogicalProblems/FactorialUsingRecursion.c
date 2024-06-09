#include<stdio.h>
int fact(int q);
int main()
{
    int n,res;
    printf("enter the positive integer:\t");
    scanf("%d",&n);
    res=fact(n);
    printf("The factorial of a number is:%d\n",res);
}
int fact(int q)
{
    int res;
    if(q==0)
        res=1;
    else
        res=q*fact(q-1);
    return res;
}
