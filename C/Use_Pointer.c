#include <stdio.h>

int main() {
    int var = 10;   // Declaring an integer variable
    int *ptr;      // Declaring a pointer

    ptr = &var;    // Assigning the address of var to the pointer

    // Print the value of 'var' using variable& pointer
    printf("Value of var: %d\n", var);
    printf("Value of var using pointer: %d\n", *ptr);

// Print the address of 'var' using variable & pointer
    printf("Address of var: %p\n", (void*)&var);
    printf("Address of var using ptr: %p\n", (void*)ptr);

    // Modify the value of 'var' usingpointer
    *ptr = 20;

    // Modified value of 'var'
    printf("Modified value of var: %d\n", var);
    printf("Modified value of var using ptr : %d\n", *ptr);
return 0;
}
