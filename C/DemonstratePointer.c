#include <stdio.h>

void modifyValue(int **ptr) {
    **ptr = **ptr + 10; 
}

int main() {
    int num = 20;
    int *ptr1 = &num;  
    int **ptr2 = &ptr1; 
    printf("Before modification: num = %d\n", num);
    modifyValue(ptr2);
    printf("After modification: num = %d\n", num);

    return 0;
}
