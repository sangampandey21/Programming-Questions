#include<stdio.h>
int multiplyByTwo(int num) {
    return num<<1;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int result = multiplyByTwo(number);
    printf("Result after multiplying %d by 2: %d\n", number, result);

    return 0;
}
