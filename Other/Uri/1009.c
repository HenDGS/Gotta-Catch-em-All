#include <stdio.h>

int main (void){

    char nome[61];
    double salario,vendas,total;

    scanf("%s",&nome);

    scanf("%lf %lf", &salario,&vendas);

    total=salario+0.15*vendas;

    printf("TOTAL = R$ %.2lf\n",total);


    return 0;
}
