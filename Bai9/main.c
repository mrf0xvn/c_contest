#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    if ((N % 400 == 0) || (N % 4 ==0 && N % 100 != 0)) {
        printf("YES");
    }else {
        printf("NO");
    }
    return 0;
}