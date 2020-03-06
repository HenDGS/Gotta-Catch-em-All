#include <stdio.h>

int main(){

    int N,hora,minutos,resto;
    scanf("%d", &N);

    hora=N/3600;
    resto=N%3600;

    minutos=resto/60;
    resto=resto%60;

    N=resto;

    printf("%d:%d:%d\n",hora,minutos,N);

    return 0;
}
