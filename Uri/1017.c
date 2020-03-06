#include <stdio.h>

int main(){

    int t;
    float v,quant;

    scanf("%d %f", &t,&v);

    quant=(t*v)/12;

    printf("%.3f\n", quant);

    return 0;
}
