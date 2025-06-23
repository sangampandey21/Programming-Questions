#include <stdio.h>
int findNonRepeatingElement(int arr[], int size) {
    int result = 0;
     for (int i = 0; i < size; i++) {
result ^= arr[i]; 
       }
    return result; }
int main() {
    int size;
    printf("Enter the number of elements in array (should be odd): ");
    scanf("%d",&size);
    if(size%2==0) {
        printf("The number of elements should be odd to have one non-repeating element.\n");
        return 0;
    }
 int arr[size];
 printf("Enter the elements of the array:\n");
for(int i=0;i<size;i++) {
    scanf("%d", &arr[i]);
      }
    int nonRepeatingElement = findNonRepeatingElement(arr, size);
    printf("The non-repeating element is %d.\n", nonRepeatingElement);

    return 0;
}
