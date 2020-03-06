#include <stdio.h>

int main(void){

    int i,n[15],par[5],impar[5],j=0,k=0,contp=0,conti=0,a,b;

    for (i=0;i<15;i++){
        scanf("%d",&n[i]);
        if (n[i]%2==0){
            contp++;
            if (contp==6){
                for (a=0;a<5;a++) printf("par[%d] = %d\n", a,par[a]);
                contp=0;
                j=0;
            }
            par[j]=n[i];
            j++;
        }
        else{
            conti++;
            if (conti==6){
                for (b=0;b<5;b++) printf("impar[%d] = %d\n", b,impar[b]);
                conti=0;
                k=0;
            }
            par[k]=n[i];
            k++;
        }
    }



    return 0;
}
