#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter the number to print\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf("-");
        }
            for(k=0;k<=i;k++)
            {
                printf("*");            
            }
    printf("\n");
    }
    return 0;
}


// enter the number to print
// 5
// ----*
// ---**
// --***
// -****
// *****