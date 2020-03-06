#include <stdio.h>
#include <math.h>

int main(void){

    int i,cont=0;
    double a,media=0;
    for (i=0;i<6;i++){
        scanf("%lf", &a);
        if (a>0){ cont++;
        media+=a;
        }
    }
    media/=cont;
    printf("%d valores positivos\n", cont);
    printf("%.1lf\n", media);

    return 0;
}
