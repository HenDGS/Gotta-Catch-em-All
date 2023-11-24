#include <stdio.h>

int main(void){

    int cod,quant;
    float valor;

    scanf("%d %d", &cod,&quant);

    if (cod==1){
        valor=4.00;
        printf("Total: R$ %.2f\n", valor*quant);
    }

    else if (cod==2){
        valor=4.50;
        printf("Total: R$ %.2f\n", valor*quant);
    }

    else if (cod==3){
        valor=5.00;
        printf("Total: R$ %.2f\n", valor*quant);
    }

    else if (cod==4){
        valor=2.00;
        printf("Total: R$ %.2f\n", valor*quant);
    }

    else if (cod==5){
        valor=1.50;
        printf("Total: R$ %.2f\n", valor*quant);
    }

    return 0;
}
