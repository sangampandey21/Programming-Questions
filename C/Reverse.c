#include <stdio.h>

int main() {
    int number, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);
    int original = number;
    while (number != 0) {
        reversed = reversed * 10 + (number % 10); 
        number /= 10;
         }
    if (original < 0) {
        printf("The reversed number is: %d\n", -reversed);
    } else {
        printf("The reversed number is: %d\n", reversed);
      }

    return 0;
}
