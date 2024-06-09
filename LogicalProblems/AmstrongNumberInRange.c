#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,l,temp,s;
    printf("enter the limit:\t");
    scanf("%d",&l);
    for(n=1;n<=l;n++)
    {
    temp=n;
    s=0;
    while(n>0)
    {
    r=n%10;
    s+=pow(r,3);
    n=n/10;
    }
    n=temp;
    if(n==s)
    printf("%d\t",n);
    }
    return 0;
}
