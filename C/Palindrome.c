#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int low = 0;
    int high = strlen(str) - 1;
    while (low < high) {
        if (str[low] != str[high]) {
            return 0;
        }
        low++;
        high--; 
    }
    return 1;
}
int main() {
    char str[] = "abbba";
    char str1[] = "abcded";
 printf("%s is palindrome %d\n", str, isPalindrome(str));
    printf("%s is palindrome %d\n", str1, isPalindrome(str1));
    
    return 0;
}
