/******************************************************************************
 * Họ và tên: [TRẦN MINH PHƯƠNG]
 * MSSV:      [PS33274]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
   float Bankinh;
    float chuvi, dientich;

    printf("Nhap ban kinh: ");
    scanf("%f", &Bankinh);

    chuvi = 2 * 3.14 * Bankinh;
    dientich = 3.14 * Bankinh * Bankinh;

    printf("Chu vi hinh tron la: %.2f\n", chuvi);
    printf("Dien tich hinh tron la: %.2f\n", dientich);

    return 0;
}