#include <stdio.h>
int countSetBits(unsigned int num) {
    int count=0;
    while (num) {
        count+=num&1; 
        num >>=1;       
    }
    return count;
}
int main() {
    unsigned int number;
    printf("Enter a number: ");
    scanf("%u", &number);
    int setBitsCount=countSetBits(number);
    printf("The number of set bits in %u is %d.\n", number, setBitsCount);

    return 0;
}
