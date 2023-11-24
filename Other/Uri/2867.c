#include <stdio.h>
#include <math.h>

int main(void){

    int C,N,M,x;

    scanf("%d", &C);

    while(C>0){
        scanf("%d %d", &N,&M);
        x=log10(N)*M+1;
        printf("%d\n", x);
        C--;
    }
    return 0;
}
