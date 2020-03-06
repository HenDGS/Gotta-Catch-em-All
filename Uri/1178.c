#include <stdio.h>

int main(void){

    double N[100],X;
    int i;

    scanf("%lf", &X);

    for (i=0;i<100;i++){
        N[i]=X;
        printf("N[%d] = %.4lf\n", i,N[i]);
        X/=2;
    }

    return 0;
}
