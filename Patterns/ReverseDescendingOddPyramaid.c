#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k,l;
    printf("enter any odd number to print\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("please enter odd number\n");
        exit(0);
    }
    for(i=0;i<(n+1)/2;i++)
    {
        for(j=0;j<i;j++)
            printf("-");
        for(k=0;k<n-(i+i);k++)
            printf("*");            
        for(l=0;l<i;l++)
            printf("-");
    printf("\n");
    }
    return 0;
}


// enter any odd number to print
// 5
// *****
// -***-
// --*--
