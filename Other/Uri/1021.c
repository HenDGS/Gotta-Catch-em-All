#include <stdio.h>
#include <math.h>

int main(void){

    double N;
    int resto;

    scanf("%lf", &N);
    N+=0.001;

    resto=N/100;
    printf("NOTAS:\n%d nota(s) de R$ 100,00\n", resto);
    N=fmod(N,100);

    resto=N/50;
    printf("%d nota(s) de R$ 50,00\n", resto);
    N=fmod(N,50);

    resto=N/20;
    printf("%d nota(s) de R$ 20,00\n", resto);
    N=fmod(N,20);

    resto=N/10;
    printf("%d nota(s) de R$ 10,00\n", resto);
    N=fmod(N,10);

    resto=N/5;
    printf("%d nota(s) de R$ 5,00\n", resto);
    N=fmod(N,5);

    resto=N/2;
    printf("%d nota(s) de R$ 2,00\n", resto);
    N=fmod(N,2);

    resto=N/1;
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", resto);
    N=fmod(N,1);

    resto=N/0.5;
    printf("%d moeda(s) de R$ 0.50\n", resto);
    N=fmod(N,0.5);

    resto=N/0.25;
    printf("%d moeda(s) de R$ 0.25\n", resto);
    N=fmod(N,0.25);

    resto=N/0.1;
    printf("%d moeda(s) de R$ 0.10\n", resto);
    N=fmod(N,0.1);

    resto=N/0.05;
    printf("%d moeda(s) de R$ 0.05\n", resto);
    N=fmod(N,0.05);

    resto=N/0.01;
    printf("%d moeda(s) de R$ 0.01\n", resto);
    N=fmod(N,0.01);

    return 0;
}
