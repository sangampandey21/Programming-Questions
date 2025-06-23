#include <stdio.h>
struct StatusFlags {
    unsigned int isActive : 1;  
    unsigned int isError : 1;   
    unsigned int isComplete : 1; 
    unsigned int priority : 2; 
    unsigned int reserved : 11; 
};
void displayStatusFlags(const struct StatusFlags *flags) {
    printf("Status Flags:-\n");
    printf("Active: %u\n", flags->isActive);
    printf("Error: %u\n", flags->isError);
    printf("Complete: %u\n", flags->isComplete);
    printf("Priority: %u\n", flags->priority);
    printf("Reserved: %u\n", flags->reserved);
}

int main() {
    struct StatusFlags status = {1, 0, 1, 2, 0}; 
    displayStatusFlags(&status);

    return 0;
}
