#include<stdio.h>

int main(){

    float r, perimeter, area;
    float PI = 3.14;

    printf("Moi ban nhap ban kinh hinh tron ");
    scanf("%f",&r);

    perimeter = 2 * PI * r;
    area = PI * r * r;

    printf("Chu vi hinh tron la %.2f\n",perimeter);
    printf("Dien tich hinh tron la %.2f\n",area);

    return 0;
}
