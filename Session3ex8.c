#include<stdio.h>

int main(){

int number;

printf(" Moi ban nhap vao so co 4 chu so\n");
scanf("%d",&number);
int nghin = number / 1000;
int tram = number % 1000 / 100;
int chuc = number % 100 / 10;
int dvi = number % 10;
printf("%d %d %d %d ", dvi, chuc, tram, nghin);

return 0;
}
