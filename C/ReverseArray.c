#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)      
         {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n / 2; i++)   {
        int temp = arr[i];
            arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("The reversed array is:\n");
    for (i = 0; i < n; i++) {
     printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
