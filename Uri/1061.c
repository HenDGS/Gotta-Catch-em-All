#include <stdio.h>

int main(void){

    int di,df,hi,hf,mi,mf,si,sf,ti,tf,t,resto;

    scanf("%d %d %d %d", &di,&hi,&mi,&si);
    scanf("%d %d %d %d", &df,&hf,&mf,&sf);

    di*=86400;
    df*=86400;

    hi*=3600;
    hf*=3600;

    mi*=60;
    mf*=60;

    tf=df+hf+mf;
    ti=di+hi+mi;
    t=tf-ti;

    while (resto!=0){
        resto=t%86400;
        t/=86400;
        printf("%d dia(s)\n",t);
        t=resto;
        resto=t%3600;
        t/=3600;
        printf("%d hora(s)\n",t);
        t=resto;
        resto=t%60;
        t/=60;
        printf("%d minuto(s)\n",t);
        printf("%d segundo(s)\n", resto);
    }

    return 0;
}
