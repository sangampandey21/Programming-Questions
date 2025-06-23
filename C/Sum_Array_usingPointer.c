#include <stdio.h>

int main() {
    int arr[100];
    int n,i;
    int sum=0;
    int *ptr;
 printf("Enter the number of elements: ");
    scanf("%d",&n);
 printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
    }

 ptr = arr;
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
   printf("The sum of the elements is: %d\n", sum);

    return 0;
}
