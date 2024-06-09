#include <stdio.h>
int main()
{
    int number = 42; 
    int *pointer;  
    pointer = &number;
    printf("Value of number: %d\n", number);
    printf("Value pointed to by pointer: %d\n", *pointer);
    *pointer = 100;
    printf("Updated value of number: %d\n", number);
    printf("Updated value pointed to by pointer: %d\n", *pointer);
    return 0;
}
