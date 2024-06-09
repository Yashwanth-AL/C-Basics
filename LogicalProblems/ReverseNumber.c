#include<stdio.h>
int main()
{
    int n,r,s=0;
    printf("Enter the positive integer:\t");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    printf("The reverse of the number is:\t%d\t",s);
    return 0;
}
