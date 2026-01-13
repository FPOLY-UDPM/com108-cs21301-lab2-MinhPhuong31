/******************************************************************************
 * Họ và tên: [TRẦN MINH PHƯƠNG]
 * MSSV:      [PS33274]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
    float Chieudai, Chieurong;
    float chuvi, dientich;

    printf("Nhap Chieu dai:");
    scanf("%f",&Chieudai);

    printf("Nhap Chieu rong:");
    scanf("%f",&Chieurong);

    chuvi = (Chieudai + Chieurong) * 2;
    dientich = Chieudai * Chieurong;

    printf("Chu vi hinh chu nhat la: %d\n", (Chieudai + Chieurong) * 2);

    printf("Dien tich hinh chu nhat la: %d", Chieudai * Chieurong);

    return 0;
}