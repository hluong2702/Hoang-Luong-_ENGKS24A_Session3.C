#include<stdio.h>

int  main(){

    int number, sum;

    printf("Moi ban nhap mot so nguyen co 4 chu so ");
    scanf("%d",&number);

    sum = (number / 1000) + ((number / 100) % 10) + ((number / 10) % 10) + (number % 10);

    printf("Tong cac so la %d\n",sum);

    return 0;

}
