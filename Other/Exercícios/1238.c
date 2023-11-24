#include <stdio.h>
#include <stdlib.h>

int main(void){

    char a[50],b[50],c[100];
    int N,i,k=0;
    int m=0,n=0;

    scanf("%d", &N);

    while(N>0){
        scanf("%s %s", &a,&b);
             if (k%2==0) {
        for (i=0;i<100;i++){
                c[i]=a[m];
                m++;
             }
             else {
                c[i]=b[n];
                n++;
             }
             k++;
        }
        printf("%s", c);
        N--;
    }
    return 0;
}
