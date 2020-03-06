#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(){

    int R;
    double VOLUME;

    scanf("%i",&R);

    VOLUME=(4.0/3)*pi*R*R*R;

    printf("VOULME = %.3lf\n", VOLUME);

    return 0;
}
