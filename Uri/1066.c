#include <stdio.h>

int main(void){

    int i,a, contpar=0,contimpar=0,contpositivo=0,contnegativo=0;

    for (i=0;i<5;i++){
        scanf("%d", &a);
        if (a%2==0) contpar++;
        else if (a%2!=0) contimpar++;
        if (a>0) contpositivo++;
        else if (a<0) contnegativo++;
    }
    printf("%d valor(es) par(es)\n", contpar);
    printf("%d valor(es) impar(es)\n", contimpar);
    printf("%d valor(es) positivo(s)\n", contpositivo);
    printf("%d valor(es) negativo(s)\n", contnegativo);

    return 0;
}
