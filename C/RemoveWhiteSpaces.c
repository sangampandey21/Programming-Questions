#include <stdio.h>

void remove_spaces(char* str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            str[j++] = str[i];}
        i++;
      }
    str[j] = '\0';
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    remove_spaces(str);
    printf("String without spaces: %s\n", str);

    return 0;
}
