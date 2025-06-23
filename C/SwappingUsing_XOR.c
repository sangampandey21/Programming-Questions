#include <stdio.h>
void swap(int *a, int *b) {
    if (a != b) {
 *a = *a ^ *b;
*b = *a ^ *b;
 *a = *a ^ *b;
        }
      }
int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
