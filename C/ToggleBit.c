#include <stdio.h>
unsigned int toggleBit(unsigned int num, int position) {
    return num ^ (1 << position);
}
int main() {
    unsigned int number;
    int position;
    printf("Enter a number: ");
    scanf("%u", &number);
    printf("Enter the bit position to toggle (0): ");
    scanf("%d", &position);
    unsigned int newNumber = toggleBit(number, position);
    printf("Number before toggling bit: %u\n", number);
    printf("Number after toggling bit at position %d: %u\n", position, newNumber);

    return 0;
}
