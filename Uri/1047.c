#include <stdio.h>

int main(void){

    int a,b,c,d,ri,rf,rr,m;

    scanf("%d %d %d %d", &a,&b,&c,&d);

    a*=60;

    c*=60;

    ri=a+b;

    rf=c+d;

    if (ri>=rf) rf+=1440;

    rr=rf-ri;

    m=rr%60;

    rr/=60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", rr,m);

    return 0;
}
