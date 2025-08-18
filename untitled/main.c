#include <stdio.h>

int main(void) {
    float pi = 3.14;
    int R;
    double CV,DT;
    scanf("%d", R);
    CV = (double)R * (double)2 * pi;
    DT = pi * (double)R * (double)R;
    printf("%4.lf %4.lf", CV, DT);
    return 0;
}