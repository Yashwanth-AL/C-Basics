#include <stdio.h>

    int i, j;
    
    void read(int *arr, int r, int c) {
    printf("Enter %d elements of the array:\n", r*c);
        for (i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                scanf("%d", (arr + i*c + j) );
            }
        }
    }
    
    void display(int *arr, int r, int c) {
        for (i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                printf("%d  ", *(arr + i*c + j) );
            }
        }
        printf("\n");
    }
   
int main()
{
    int *ptr, a[25][25], r,c;
    printf("Enter number of rows in the array:\t");
    scanf("%d", &r);
    printf("Enter number of columns in the array:\t");
    scanf("%d", &c);
    ptr = & a[0][0];
    read(ptr, r, c);
    printf("The %d elements of the array are :\n", r*c);
    display(ptr, r, c);
    return 0;
}
