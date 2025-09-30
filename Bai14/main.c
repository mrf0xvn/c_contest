#include <stdio.h>

int main() {
    float a,b,c,d,dtb;
    scanf("%f%f%f%f", &a,&b,&c,&d);
    dtb = ((float)2 * c + (float)3 * d + a + b) / 7 ;
    if (dtb >= 8) {
        printf("GIOI");
    }else if (dtb < 8 && dtb >= 6.5) {
        printf("KHA");
    }else if (dtb < 6.5 && dtb >= 5) {
        printf("TRUNG BINH");
    } else {
        printf("YEU");
    }
    return 0;
}
