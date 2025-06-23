#include <stdio.h>
int findRightmostSetBitPosition(int num) {
    if(num==0) {
 return -1;
       }
int position=1;
while((num&1)==0) {
     num >>= 1;
        position++;
       }
  return position;
}
int main() {
 int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int position = findRightmostSetBitPosition(number);
    if (position != -1) {
        printf("The position of the rightmost set bit is: %d\n", position);
      } else {
        printf("The number has no set bits.\n");
     }
return 0;
}
