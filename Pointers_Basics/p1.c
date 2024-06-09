#include <stdio.h>

int main()
{
    int *ptr, a[25], n, i;
    printf("Enter the size of the array:\t");
    scanf("%d", &n);
    ptr = a;
    printf("Enter %d elements of the array : \n", n);
    for(i = 0; i < n; i++){
        scanf("%d", (ptr+i) );
    }
    printf("The array elements are: \n");
    for(i = 0; i < n; i++){
        printf("%d  ", *(ptr+i) );
    }
    printf("\n");
    printf("The array elements in reverse order are: \n");
    for(i = n-1; i >= 0; i--){
        printf("%d  ", *(ptr+i) );
    }
   return 0;
}
