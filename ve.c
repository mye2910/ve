#include<stdio.h>
#include<conio.h>

struct Ve
{
    char TenPhim;
    int GiaTien;
    int ThoiGian;
    int Ngay;
};
typedef struct Ve VE;

void NhapVe(VE &V)
{
    printf("Nhap ten phim: \n");
    scanf("%d", &t.MaTinh);

    fflush(stdin);
    printf("Nhap vao ten tinh: \n");
    gets(t.TenTinh);

    printf("Nhap vao dien tich: \n");
    scanf("%f", &t.DienTich);
}

void XuatTinh(TINH t)
{
    printf("Ma tinh: %d\n", t.MaTinh);
    printf("Ten tinh: %s\n", t.TenTinh);
    printf("Dien tich: %.2f (km^2)\n", t.DienTich);
}

int main()
{
    TINH t1;
    NhapTinh(t1);
    XuatTinh(t1);

    getch();
    return 0;
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privac