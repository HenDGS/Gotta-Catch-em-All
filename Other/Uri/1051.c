#include <stdio.h>

int main(void){

    float a,imposto,b,c;

    scanf("%f", &a);

    if (a<=2000.00){
        printf("Isento\n");
    }

    else if (a>2000 && a<=3000){
        imposto=0.08*(a-2000);
        printf("R$ %.2f\n", imposto);
    }

    else if (a>3000 && a<=4500){
        imposto=(0.08*(a-2000-(a-3000)))+(0.18*(a-3000));
        printf("R$ %.2f\n", imposto);
    }

    else if (a>4500){
        imposto=(0.08*(a-2000-(a-3000)))+(0.18*(a-3000-(a-4500)))+(0.28*(a-4500));
        printf("R$ %.2f\n", imposto);
    }

    return 0;
}
