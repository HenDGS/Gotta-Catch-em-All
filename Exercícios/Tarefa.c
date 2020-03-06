#include <stdio.h>
#include <math.h>

int main(void){

    double a,resto,b;

    scanf("%lf", &a);

    resto=a/2;

    b=fmod(a,2);

    printf("%lf\n%lf\n", resto,b);


    return 0;
}
