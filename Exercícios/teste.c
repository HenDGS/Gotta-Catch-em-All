#include <stdio.h>
int main() {
   int a = 20;	/* 20 = 010100 */
   int c = 0;

   c = a << 2;	/* 80 = 101000 */
   printf("Left shift - Value of c is %d\n", c );

   c = a >> 2;	/*05 = 000101 */
   printf("Right shift - Value of c is %d\n", c );
   return 0;
}
