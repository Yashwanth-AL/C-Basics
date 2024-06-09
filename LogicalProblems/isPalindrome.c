#include<stdio.h>
int main()
{
    int n,r,s=0,temp;
    printf("enter the number:\t");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(temp==s)
        printf("palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}
