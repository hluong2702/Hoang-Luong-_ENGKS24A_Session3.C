#include <stdio.h>

int main() {
    float base, height, area;

    printf("Nhap do dai day cua tam giac: ");
    scanf("%f", &base);
    printf("Nhap do cao cua tam giac: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("Dien tich tam giac la: %.2f\n", area);

    return 0;
}