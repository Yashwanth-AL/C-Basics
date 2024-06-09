#include <stdio.h>

    int i;
    
    void read(int *arr, int size) {
    printf("Enter %d elements of the array:\n", size);
        for (i = 0; i < size; i++) {
            scanf("%d", (arr + i) );
        }
    }
    
    void display(int *arr, int size) {
        for(i = 0; i < size; i++) {
            printf("%d  ", *(arr + i) );
        }
        printf("\n");
    }
    
    void reverse(int *arr, int size) {
        int *start = arr;
        int *end = arr + size - 1;
        
        while(start < end){
            int temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
    }
    
int main()
{
    int *ptr, a[25], size;
    printf("Enter the size of the array:\t");
    scanf("%d", &size);
    ptr = a;
    read(ptr, size);
    printf("The elements of the array before reversing are:\n");
    display(ptr, size);
    printf("The elements of the array after reversing are:\n");
    reverse(ptr, size);
    display(ptr, size);
    return 0;
}
