#include <stdio.h>

int main() {
    double a, b, tich;
    printf("Nhap so thu nhat: ");
    scanf("%lf", &a);
    printf("Nhap so thu hai: ");
    scanf("%lf", &b);

    tich = a * b;
    printf("Tich cua 2 so la: %.2lf\n", tich);
    return 0;
}