#include<stdio.h>
#include<ctype.h>
void to_uppercase(char* str) {
    int i = 0;
 while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }
}int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

 str[strcspn(str, "\n")] = '\0';
    to_uppercase(str);
    printf("Uppercase string: %s\n", str);

    return 0;
}
