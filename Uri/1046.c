#include <stdio.h>

int main(void){

    int a,b,r;

    scanf("%d %d", &a,&b);

    if (b<=a) b+=24;

    r=b-a;

    printf("O JOGO DUROU %d HORA(S)\n", r);

    return 0;
}
