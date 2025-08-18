#include <stdio.h>

int main(void) {
    long long a,b,c,s;
    scanf("%lld %lld %lld", &a, &b, &c);
    s = (a * b) + (a * c) + (b * a) + (b * c);
    printf("%lld", s);
    return 0;
}