#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

      if (N <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        
        for (int i = 1; i <= N; i++) {
            sum += i;
        }

        printf("The sum of the first %d natural numbers is %d\n", N, sum);
    }

    return 0;
}
