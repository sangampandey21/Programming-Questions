#include <stdio.h>
int main()
{
    int i = 5, j = 10, k = 15;
    printf("%d", sizeof(k = i + j));
    printf("%d", k);
    return 0;
}
