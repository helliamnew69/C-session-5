#include <stdio.h>

int main() {
    char c;

    // Nh?p ký t?
    printf("Nhap mot ky tu: ");
    scanf("%c", &c);

    // Ki?m tra lo?i ký t? và x? lý
    if (c >= 'a' && c <= 'z') {
        // Ch? thu?ng ? chuy?n sang ch? hoa
        printf("Chu hoa tuong ung: %c\n", c - 32);
    } 
    else if (c >= 'A' && c <= 'Z') {
        // Ch? hoa ? chuy?n sang ch? thu?ng
        printf("Chu thuong tuong ung: %c\n", c + 32);
    } 
    else {
        // Không ph?i ch? cái
        printf("Khong phai chu cai.\n");
    }

    return 0;
}

