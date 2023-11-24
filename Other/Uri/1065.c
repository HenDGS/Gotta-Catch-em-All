#include <stdio.h>

int main(void){

    int i,a,cont=0;
    for (i=0;i<5;i++){
        scanf("%d", &a);
        if (a%2==0) cont++;
    }
    printf("%d valores pares\n", cont);
    return 0;
}
