#include <stdio.h>

int main() {
    int m3;
    long tien = 0;

    // Nh?p s? m³ nu?c
    printf("Nhap so m3 nuoc tieu thu trong thang: ");
    scanf("%d", &m3);

    if (m3 < 0) {
        printf("So m3 khong hop le!\n");
        return 0;
    }

    // Tính ti?n theo b?c
    if (m3 <= 10) {
        tien = m3 * 6000;
    } else if (m3 <= 20) {
        tien = 10 * 6000 + (m3 - 10) * 7000;
    } else if (m3 <= 30) {
        tien = 10 * 6000 + 10 * 7000 + (m3 - 20) * 8500;
    } else {
        tien = 10 * 6000 + 10 * 7000 + 10 * 8500 + (m3 - 30) * 10000;
    }

    // In k?t qu?
    printf("Tong so tien phai tra: %ld VND\n", tien);

    return 0;
}

