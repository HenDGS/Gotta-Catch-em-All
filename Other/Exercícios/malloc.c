#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *i,j;

    i=malloc(1*sizeof(int));

    for (j=0;j<9999;j++){
        i[j]=j;
        printf("%d\n",i[j]);
    }

    realloc(i,9999*sizeof(int));

    for (j=0;j<9999;j++){
        i[j]=j;
        printf("%d\n",i[j]);
    }



    return 0;
}
