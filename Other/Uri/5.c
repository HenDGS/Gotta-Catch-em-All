#include <stdio.h>

int main(void){

    int n,p,k,num,h;

    scanf("%d %d %d", &n,&p,&k);

    h=n>>(p-1);

    n=h>>k;

    num=n&h;

    printf("%d\n", num);

    return 0;
}
