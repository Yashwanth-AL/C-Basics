#include<stdio.h>
int main()
{
    int i,l,j,sum;
    printf("enter the limit:\n");
    scanf("%d",&l);
    for(j=1;j<=l;j++)
    {
    sum=0;
    for(i=1;i<j;i++)
    {
        if(j%i==0)
            sum+=i;
    }
    if(sum==j)
        printf("%d\t",sum); 
    }
    return 0;
}
