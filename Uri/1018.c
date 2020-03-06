#include <stdio.h>

int main(){

    int N,resto;

    scanf("%d", &N);
    printf("%d\n", N);

    resto=N/100;
    printf("%d nota(s) de R$ 100,00\n", resto);
    N=N%100;

    resto=N/50;
    printf("%d nota(s) de R$ 50,00\n", resto);
    N=N%50;

    resto=N/20;
    printf("%d nota(s) de R$ 20,00\n", resto);
    N=N%20;

    resto=N/10;
    printf("%d nota(s) de R$ 10,00\n", resto);
    N=N%10;

    resto=N/5;
    printf("%d nota(s) de R$ 5,00\n", resto);
    N=N%5;

    resto=N/2;
    printf("%d nota(s) de R$ 2,00\n", resto);
    N=N%2;

    resto=N/1;
    printf("%d nota(s) de R$ 1,00\n", resto);
    //N=N%1;

    return 0;
}
