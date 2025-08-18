#include <stdio.h>

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if ((a > 0 && b > 0 && c > 0) && ((a + b > c) && (a + c > b) && (c + b > a))){
        printf("YES");
    }else {
        printf("NO");
    }

    return 0;
}