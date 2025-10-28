#include <stdio.h>

int main() {
    float thuNhap, thue = 0.0;

    // Nh?p m?c thu nh?p
    printf("So Tien : ");
    scanf("%f", &thuNhap);

    // Tính thu? theo quy d?nh
    if (thuNhap <= 5)
        thue = thuNhap * 0.05;
    else if (thuNhap <= 10)
        thue = thuNhap * 0.10;
    else
        thue = thuNhap * 0.15;

    // In k?t qu?
    printf("Thue thu nhap phai dong : %.2f\n", thue);

    return 0;
}

