#include <stdio.h>
int main() {
    int n, ngay, nam, tuan, snd;
    scanf("%d", &n);
    nam = n / 365;
    snd = n % 365;
    tuan = snd / 7;
    ngay = snd % 7;
    printf("%d %d %d", nam, tuan, ngay);
    return 0;
}
