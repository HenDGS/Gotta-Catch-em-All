#include <stdio.h>

int main(void){

    int N[20],i,j=19,a;

    for (i=0;i<20;i++){
        scanf("%d", &N[i]);
    }

    for (i=0;i<11;i++){
        a=N[i];
        N[i]=N[j];
        N[j]=a;
        j--;
        printf("N[%d] = %d\n", i,N[i]);
    }

    return 0;
}
