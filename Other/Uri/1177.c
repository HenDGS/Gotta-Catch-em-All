#include <stdio.h>

int main(void){

    int i,N[1000],T,x=0;

    scanf("%d",&T);

    for (i=0;i<1000;i++){
        if (x==T) x=0;
        N[i]=x;
        printf("N[%d] = %d\n", i,N[i]);
        x++;
    }

    return 0;
}
