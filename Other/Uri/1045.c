#include <stdio.h>

int main(void){

    double a,b,c,A,B,C;

    scanf("%lf %lf %lf", &a,&b,&c);

    if (a>b && a>c){
        A=a;
        if (b>c){
            B=b;
            C=c;
        }
        else{
            C=b;
            B=c;
        }
    }
    else if (b>a && b>c){
        A=b;
        if (a>c){
            B=a;
            C=c;
        }
        else{
            C=a;
            B=c;
        }
    }
    else{
        A=c;
        if (a>b){
            B=a;
            C=b;
        }
        else{
            C=a;
            B=b;
        }
    }

    if (A>=(B+C)){
        printf("NAO FORMA TRIANGULO\n");
    }

    else{
    if ((A*A)==((B*B)+(C*C))) printf("TRIANGULO RETANGULO\n");

    if ((A*A)>((B*B)+(C*C))) printf("TRIANGULO OBTUSANGULO\n");

    if ((A*A)<((B*B)+(C*C))) printf("TRIANGULO ACUTANGULO\n");

    if (A==B && B==C) printf("TRIANGULO EQUILATERO\n");

    if ((A==B && B!=C) || (A==C && C!=B) || (B==C && B!=A)) printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
