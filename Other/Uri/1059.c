#include <stdio.h>

int main(void){

    int a,res;

    a=1;

    while (a<101){
        if (a%2==0) printf("%d\n",a);
        a++;
    }

    return 0;
}
