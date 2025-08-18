#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    int tong = a + b;
    int hieu = a - b;
    long long tich = (long)a * b;
    double thuong = (double) a / b;
    printf("\n%d", tong);
    printf("\n%d", hieu);
    printf("\n%lld", tich);
    if(b == 0){
        printf("\nINVALID");
    }else{
        printf("\n%.4lf", thuong);
    }


}