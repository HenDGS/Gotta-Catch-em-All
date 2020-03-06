#include <stdio.h>

int main(){

    int N,anos,meses,resto;
    scanf("%d", &N);

    anos=N/365;
    resto=N%365;

    meses=resto/30;
    resto=resto%30;

    N=resto;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,N);

    return 0;
}
