#include <stdio.h>

int main(void) {
    long long c;
    float f;
    scanf("%lld", &c);

    f = ((float)c * 9) / 5 + 32;


    printf("%.2lf", f);
    return 0;
}