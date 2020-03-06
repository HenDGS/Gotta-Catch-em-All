#include <stdio.h>

int main(){

    int a,b,c,maior;
    scanf("%d %d %d", &a,&b,&c);

    maior=(a+b+abs(a-b))/2;

    a=maior;

    maior=(a+c+abs(a-c))/2;

    printf("%d eh o maior\n", maior);

    return 0;
}
