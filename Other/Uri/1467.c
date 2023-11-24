#include <stdio.h>

int main(void){

    int A,B,C;

    while(1){

        scanf("%d %d %d", &A,&B,&C);

        if(A!=1 || A!=0){
        continue;
        }

        if (A!=B && A!=C){
            printf("A\n");
            break;
        }

        else if (B!=A && B!=C){
            printf("B\n");
            break;
        }

        else if (C!=A && C!=B){
            printf("C\n");
            break;
        }

        printf("*\n");
    }

    return 0;
}
