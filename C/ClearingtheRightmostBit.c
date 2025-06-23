#include <stdio.h>
int clearRightmostSetBit(int num) {
    return num & (num - 1);}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = clearRightmostSetBit(number);
    printf("Result after clearing the rightmost bit of %d: %d\n", number, result);

    return 0;
}
