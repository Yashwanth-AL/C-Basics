#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b:\t");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Result after swapping is a=%d\t and b=%d\t",a,b);
    return 0;
}
