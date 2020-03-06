#include <stdio.h>
#include <math.h>

int main(void){

    double a,b,c,p,area;

    scanf("%lf %lf %lf", &a,&b,&c);

    if (a<(b+c) && a>fabs(b-c)){
        p=a+b+c;
        printf("Perimetro = %.1lf\n", p);
    }

    else {
        area=((a+b)*c)/2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}
