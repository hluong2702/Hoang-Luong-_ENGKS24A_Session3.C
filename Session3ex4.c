#include<stdio.h>

int main (){
  float diemToan,diemVan,diemAnh,tongDiem,diemTB;

  printf("Moi ban nhap diem toan");
  scanf("%f",&diemToan);

  printf("Moi ban nhap diem van");
  scanf("%f",&diemVan);

  printf("Moi ban nhap diem Anh");
  scanf("%f",&diemAnh);

  tongDiem = diemToan + diemVan + diemAnh;

  diemTB = tongDiem / 3;

  printf("Tong diem la %.2f\n",tongDiem);
  printf("Diem TB la %.2f\n",diemTB);
  return 0;
}
