#include <stdio.h>

int main() {
    float diem;

    // Nh?p di?m trung bình
    printf("Nhap Diem : ");
    scanf("%f", &diem);

    // Ki?m tra di?m có h?p l? hay không
    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le. Vui long nhap tu 0 den 10.\n");
        return 0;
    }

    // X?p lo?i h?c l?c
    if (diem >= 8) {
        printf("Hoc luc gioi\n");
    } else if (diem >= 6.5) {
        printf("Hoc luc kha\n");
    } else if (diem >= 5) {
        printf("Hoc luc trung binh\n");
    } else {
        printf("Hoc luc yeu\n");
    }

    return 0;
}

