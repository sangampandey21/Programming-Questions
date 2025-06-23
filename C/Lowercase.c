#include <stdio.h>
#include <ctype.h>

void to_lowercase(char* str) {
    int i = 0;
    
while (str[i]) {
        str[i]=tolower(str[i]);
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str,"\n")] = '\0';
    to_lowercase(str);
    printf("Lowercase string: %s\n", str);

    return 0;
}
