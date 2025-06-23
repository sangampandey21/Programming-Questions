#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;
    ptr = arr;
    printf("Elements of the array using pointer arithmetic: \n");
    for (i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
    printf("\nAddresses of the elements using pointer arithmetic: \n");
    for (i = 0; i < 5; i++) {
        printf("ptr + %d = %p\n", i, (ptr + i));
    }
    for (i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 2;
    }
    printf("\nModified elements of the array: \n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
