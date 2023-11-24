#include <stdio.h>

int main(void){

    int a,b,q,r;

    scanf("%d %d", &a,&b);

    r=(a%b+abs(b))%abs(b);

    q=(a-r)/b;

    printf("%d %d\n", q,r);

    return 0;
}
