#include <stdio.h>

int main(void){

    float a,b;

    scanf("%f", &a);

    if (a<=400){
        b=0.15*a;
        a+=b;
        printf("Novo salario: %.2f\n", a);
        printf("Reajuste ganho: %.2f\n", b);
        printf("Em percentual: 15 %\n");
    }

    else if (a>400 && a<=800){
        b=0.12*a;
        a+=b;
        printf("Novo salario: %.2f\n", a);
        printf("Reajuste ganho: %.2f\n", b);
        printf("Em percentual: 12 %\n");
    }

    else if (a>800 && a<=1200){
        b=0.10*a;
        a+=b;
        printf("Novo salario: %.2f\n", a);
        printf("Reajuste ganho: %.2f\n", b);
        printf("Em percentual: 10 %\n");
    }

    else if (a>1200 && a<=2000){
        b=0.07*a;
        a+=b;
        printf("Novo salario: %.2f\n", a);
        printf("Reajuste ganho: %.2f\n", b);
        printf("Em percentual: 7 %\n");
    }

    else if (a>2000){
        b=0.04*a;
        a+=b;
        printf("Novo salario: %.2f\n", a);
        printf("Reajuste ganho: %.2f\n", b);
        printf("Em percentual: 4 %\n");
    }

    return 0;
}
