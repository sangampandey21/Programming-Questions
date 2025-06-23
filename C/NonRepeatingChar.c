#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

char first_non_repeating(char* str) {
    int frequency[MAX_CHAR] = {0}; 
    int i;
for (i = 0; str[i] != '\0'; ++i) {
        frequency[(unsigned char)str[i]]++;
    }
for (i = 0; str[i] != '\0'; ++i) {
        if (frequency[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }
return '\0'; }

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    char result = first_non_repeating(str);

    if (result) {
        printf("The first non-repeating char. is: %c\n", result);
    } else {
        printf("No non-repeating char. \n");
    }

    return 0;
}
