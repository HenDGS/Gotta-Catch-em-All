#include <stdio.h>

int main(void){

    int a,i;

    scanf("%d", &a);

    for (i=0;i<6;i++){
        if (a%2==0) a++;
        printf("%d\n", a);
        a+=2;
    }

    return 0;
}
