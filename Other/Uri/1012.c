#include <stdio.h>
#define pi 3.14159

int main(){

    double A,B,C;
    double at,ac,az,aq,ar;

    scanf("%lf %lf %lf", &A,&B,&C);

    at=A*C/2;
    ac=pi*C*C;
    az=(A+B)*C/2;
    aq=B*B;
    ar=A*B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", at,ac,az,aq,ar);

    return 0;
}
