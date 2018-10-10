#include <stdio.h>



int main() {
    int namKinhNghiem, namCongHien, luongChinhTuc, luongThuongThang13;
    printf("Vui long nhap so nam kinh nghiem:\n");
    scanf("%d", &namKinhNghiem);
    printf("Vui long nhap so nam lam viec cho cong ty:\n");
    scanf("%d", &namCongHien);
    if (namKinhNghiem < 2){
        printf("Luong chinh thuc la: 10000000.\n");
        namKinhNghiem = 10000000;
    }
    else if (2 >= namKinhNghiem < 5){
        printf("Luong chinh thuc la: 20000000");
        namKinhNghiem = 20000000;
    }
    else {
        printf("Luong chinh thuc la : 30000000");
        namKinhNghiem = 30000000;
    }

    if (namCongHien < 1){
        printf("\nLuong thuong bang 30%% luong chinh thuc.\n");
        namCongHien = 0.3 * namKinhNghiem;
    }
    else if (1 <= namCongHien < 2){
        printf("\nLuong thuong bang 50%% luong chinh thuc.\n");
        namCongHien = 0.5 * namKinhNghiem;
    }
    else if ( 2 <= namCongHien <5){
        printf("\nLuong thuong bang 100%% luong chinh thuc.\n");
        namCongHien = 1 * namKinhNghiem;
    }
    else{
        printf("\nLuong thuong bang 200%% luong chinh thuc.\n");
        namCongHien = 2 * namKinhNghiem;
    }

    int tongLuongThuongThang13 = namCongHien + namKinhNghiem;
    printf("\nTong luong thuong thang 13 la:\n", tongLuongThuongThang13);


    return 0;
}