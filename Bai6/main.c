#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if ((N % 2) == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    if ((N % 3 == 0) && (N % 5 == 0)) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    if ((N % 3 == 0) && (N % 7 != 0)) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    if ((N % 3) == 0 || (N % 7) == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    if ((N > 30) && (N < 50)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    if ((N >= 30) && ((N %  2 == 0) || (N % 3 == 0) || (N % 5 == 0) )) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    int r = N % 10;
    if ((N >= 10) && (N <= 99) && ((r == 2) || (r == 3) || (r == 5) || (r == 7))) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    if ((N <= 100 && N % 23 == 0)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    if ((N <= 10 || N >= 20)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    if ((r % 3) == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}