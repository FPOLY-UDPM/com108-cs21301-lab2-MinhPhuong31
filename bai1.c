/******************************************************************************
 * Họ và tên: [TRẦN MINH PHƯƠNG]
 * MSSV:      [PS33274]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main() {
    int a, b;
    int sum, minus;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    sum = a + b;
    minus = a - b;

    printf("Tong = %d\n", sum);
    printf("Hieu = %d\n", minus);

    return 0;
}
