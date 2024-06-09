//sum of cubes of digits is equal to the same number.

#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,r,temp,s=0;
    printf("enter the number:\t");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
    r=n%10;
    s+=pow(r,3);
    n=n/10;
    }
    n=temp;
    if(n==s)
    printf("%d is a Amstrong number\n",n);
    else
    printf("%d is not a Amstrong number\n",n);
    return 0;
}
