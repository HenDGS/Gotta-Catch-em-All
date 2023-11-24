#include <stdio.h>

int main(void){

    int n,h;
    float sal,v;

    scanf("%d %d %f", &n,&h,&v);

    sal=h*v;

    printf("NUMBER = %d\nSALARY = U$ %0.2f", n,sal);

    return 0;
}
