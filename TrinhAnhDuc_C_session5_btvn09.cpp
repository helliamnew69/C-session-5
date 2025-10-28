#include <stdio.h>

int main() {
    float heSoLuong;
    int ngayCong, chucVu;
    long phuCap = 0;
    long thuong = 0;
    long luong;

    // Nh?p d? li?u t? ngu?i dùng
    printf("Nhap he so luong: ");
    scanf("%f", &heSoLuong);

    printf("Nhap so ngay cong trong thang: ");
    scanf("%d", &ngayCong);

    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &chucVu);

    // Xác d?nh ph? c?p theo ch?c v?
    if (chucVu == 1)
        phuCap = 500000;
    else if (chucVu == 2)
        phuCap = 1000000;
    else if (chucVu == 3)
        phuCap = 2000000;
    else {
        printf("Chuc vu khong hop le!\n");
        return 0;
    }

    // Tính thu?ng
    if (ngayCong > 26)
        thuong = (ngayCong - 26) * 200000;

    // Tính luong
    luong = ngayCong * 160000 * heSoLuong + phuCap + thuong;

    // In k?t qu?
    printf("\n===== KET QUA =====\n");
    printf("He so luong: %.2f\n", heSoLuong);
    printf("So ngay cong: %d\n", ngayCong);
    printf("Chuc vu: ");
    if (chucVu == 1) printf("Nhan vien\n");
    else if (chucVu == 2) printf("To truong\n");
    else printf("Quan ly\n");

    printf("Phu cap: %ld\n", phuCap);
    printf("Thuong: %ld\n", thuong);
    printf("Tong luong: %ld VND\n", luong);

    return 0;
}

