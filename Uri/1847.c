#include <stdio.h>

int main(void){

    int a,b,c;

    scanf("%d %d %d", &a,&b,&c);

    if (a>b){
        if (c>b || b==c){
            printf(":)\n");
        }
        else if (b>c){
            if (c-b>b-a) printf(":)\n");
            else if (c-b<=b-a) printf(":(\n");
        }
    }
    else if (a<b){
        if (b>c || b==c){
            printf(":(\n");
        }
        else if (c>b){
            if (b-a>c-b) printf(":(\n");
            else if (c-b>=b-a) printf(":)\n");
        }
    }
    else if (a==b){
        if (c>b) printf(":)\n");
        else if (b>c) printf(":(\n");
    }

    return 0;
}
