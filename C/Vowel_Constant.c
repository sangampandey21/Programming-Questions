#include <stdio.h>
#include <ctype.h>

int is_vowel(char ch) {
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) { 
    if (is_vowel(str[i])) {
        ++vowels;
 } else {
     ++consonants;
     }
     }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
