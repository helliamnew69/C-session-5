#include <stdio.h>

int main() {
    int kWh, loaiHo;
    float tienBacThang = 0, phuPhi, tongTien;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &kWh);

    printf("Nhap loai ho tieu dung (1 - Gia dinh, 2 - Kinh doanh, 3 - San xuat): ");
    scanf("%d", &loaiHo);

    // Tính ti?n theo b?c thang
    if (kWh <= 50)
        tienBacThang = kWh * 1500;
    else if (kWh <= 100)
        tienBacThang = 50 * 1500 + (kWh - 50) * 2000;
    else if (kWh <= 200)
        tienBacThang = 50 * 1500 + 50 * 2000 + (kWh - 100) * 2500;
    else
        tienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (kWh - 200) * 3000;

    // Tính ph? phí theo lo?i h?
    switch (loaiHo) {
        case 1:
            phuPhi = tienBacThang * 0.05; // Gia dình
            break;
        case 2:
            phuPhi = tienBacThang * 0.10; // Kinh doanh
            break;
        case 3:
            phuPhi = tienBacThang * 0.08; // S?n xu?t
            break;
        default:
            printf("Loai ho khong hop le!");
            return 0;
    }

    // T?ng ti?n di?n
    tongTien = tienBacThang + phuPhi;

    printf("\nTien dien phai tra: %.0f VND", tongTien);

    return 0;
}

