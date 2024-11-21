#include<stdio.h>

int main(){

    float celsius, fahrenheHit;
    
    printf("Nhiet do hom nay la ");
    scanf("%f",&celsius);

    fahrenheHit = (celsius * 9/5) + 32;
    
    printf(" Hom nay %.2f độ F ",fahrenheHit);

    return 0;
}
