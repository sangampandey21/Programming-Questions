#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) {
    printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}
