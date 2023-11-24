#include <stdio.h>

int main(void){

    int N,v[100],conti=0,conto;

    scanf("%d", &N);

    while (N>0){
        scanf("%d", &v[N]);
        if (v[N]<=20 && v[N]>=10) conti++;
        else conto++;
        N--;
    }

    printf("%d in\n", conti);

    printf("%d out\n", conto);

    return 0;
}
