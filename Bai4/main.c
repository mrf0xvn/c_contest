#include <stdio.h>

int main() {
    int R;
    scanf("%d", &R);
    double cv,dt;
     cv = R * 2 * 3.14;
     dt = 3.14 * R * R;
    printf("%.4f %.4lf", cv, dt);
}