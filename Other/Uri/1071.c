#include <stdio.h>

int main (void){

    int a,b,n=0;

    scanf("%d %d", &a,&b);

    if (a%2!=0) a-=1;

    while (a!=b){
        if (a%2!=0) n=n+a;
        a--;
    }

    printf("%d\n", n);

    return 0;
}
