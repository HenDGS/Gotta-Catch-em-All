#include <stdio.h>

int main(void){

    float M[12][12],x;
    int i,j;
    char O;

    scanf("%c", &O);

    for (i=0;i<12;i++){
        for (j=0;j<12;j++){
            scanf("%f",&M[i][j]);
        }
    }

    if (O=='S'){
        for (i=0;i<12;i++){
            for (j=0;j<12;j++){
                if (j>i) x+=M[i][j];
            }
        }
    }

    if (O=='M'){
        for (i=0;i<12;i++){
            for (j=0;j<12;j++){
                if (j>i) x+=M[i][j];
            }
        }
    j/=12;
    }

    printf("%.1f\n", x);

    return 0;
}
