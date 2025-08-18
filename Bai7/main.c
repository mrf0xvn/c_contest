#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d%d", &a, &b);
    long long kq = a / b * b;
    long long kq2 = kq + b;
    printf("%lld ", kq);
    if (a % b == 0) {
        printf("%lld ", a);
    }else {
        printf("%lld", kq2);
    }
    return 0;
}
