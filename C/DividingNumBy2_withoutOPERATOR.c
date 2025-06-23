#include <stdio.h>
int divideByTwo(int num) {
    return num >> 1;
}
int main() {
    int number;
    printf("Enter a number: ");
scanf("%d", &number);
    int result = divideByTwo(number);
  printf("Result after dividing %d by 2: %d\n", number, result);

    return 0;
}
