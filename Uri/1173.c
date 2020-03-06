#include <stdio.h>

int main(void){

    int i,V,N[10];

    scanf("%d",&V);

    for (i=0;i<10;i++){
        N[i]=V;
        V*=2;
        printf("%d\n", N[i]);
    }

    return 0;
}
