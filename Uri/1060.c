#include <stdio.h>

int main(void){

    double a,n;
    int cont=0;

    for (a=1;a<7;a++){
        scanf("%lf", &n);
        if (n>0) cont++;
    }
    printf("%d valores positivos\n", cont);

    return 0;
}
