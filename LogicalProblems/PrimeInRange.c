#include<stdio.h>
int main()
{
    int n,i,j,count,l;
    printf("enter the limit:\t");
    scanf("%d",&l);
    for(j=1;j<=l;j++)
    {
    count=0;
    for(i=1;i<=j;i++)
    {
        if(j%i==0)
        count++;
    }
    if(count==2)
        printf("%d\t",j);
    }
    return 0;
}
