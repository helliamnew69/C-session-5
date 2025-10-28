#include <stdio.h>

int main() {
    float a, b, kq;
    char op;

    // Nh?p hai s? th?c
    printf("Nhap so thu nhat (a): ");
    scanf("%f", &a);

    printf("Nhap so thu hai (b): ");
    scanf("%f", &b);

    // Nh?p toán t?
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &op);  // có kho?ng tr?ng tru?c %c d? b? qua ký t? Enter

    // X? lý theo toán t?
    switch (op) {
        case '+':
            kq = a + b;
            printf("Ket qua: %.2f + %.2f = %.2f\n", a, b, kq);
            break;

        case '-':
            kq = a - b;
            printf("Ket qua: %.2f - %.2f = %.2f\n", a, b, kq);
            break;

        case '*':
            kq = a * b;
            printf("Ket qua: %.2f * %.2f = %.2f\n", a, b, kq);
            break;

        case '/':
            if (b == 0)
                printf("Loi: Khong the chia cho 0.\n");
            else {
                kq = a / b;
                printf("Ket qua: %.2f / %.2f = %.2f\n", a, b, kq);
            }
            break;

        default:
            printf("Loi: Toan tu khong hop le.\n");
    }

    return 0;
}

