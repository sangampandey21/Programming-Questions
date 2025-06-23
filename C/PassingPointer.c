#include <stdio.h>

void modifyValue(int *ptr) {
    *ptr = *ptr + 100; 
}

int main() {
    int num = 60;
    printf("Before modification: num = %d\n", num);
    modifyValue(&num);
    printf("After modification: num = %d\n", num);

    return 0;
}
