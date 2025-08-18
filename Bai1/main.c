#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    long long b = (long long)a * a * a + 3 * (long long)a * a + a + 1;
    printf("%lld", b);
    return 0;
}