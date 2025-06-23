#include <stdio.h>
#include <stdbool.h>
bool isPowerOfTwo(int num) {
    return (num > 0) && ((num & (num - 1)) == 0);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPowerOfTwo(number)) {
        printf("%d is power of two.\n", number);
    } else {
        printf("%d is not a power of two.\n", number);
    }

    return 0;
}
