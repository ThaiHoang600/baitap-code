#include <stdio.h> Thay doi nho nhe
#include <math.h>
int main()
{
    int nhietdo, tien, traloi, buoinghi, buoitre;

    printf("Nhap vao so nhiet do la : ^\n");
    scanf("%d", &nhietdo);
    printf("Nhap vao so tien tiet kiem la: ^\n");
    scanf("%d", &tien); // don vị trieu vnd
    printf("Hom nay co phai ngay dac biet nao khong:(co thi nhap 1, khong co thi nhap 0): ^\n");
    scanf("%d", &traloi);
    printf("Nhap vao so buoi nghi: ^\n");
    scanf("%d", &buoinghi);
    printf("Nhap vao so buoi di tre la: \n");
    scanf("%d", &buoitre);
    if (nhietdo >= 100)
    {
        printf("Nuoc soi ^\n");
    }
    else
    {
        printf("Nuoc chua soi \n");
    }
    if (tien >= 40)
    {
        printf("Mua xe airblade ^\n");
    }
    else
    {
        printf("Khong mua xe airblade \n");
    }
    if (traloi = 1)
    {
        printf("Hom nay khong den truong \n");
    }
    if (traloi = 0)
    {
        printf("Hom nay di den truong");
    }
    if (buoinghi >= 4)
    {
        printf("Cam thi");
    }
    else if (buoinghi > 0 && buoitre >= 4)
    {
        printf("Cam thi");
    }
    else
    {
        printf("Khong bi cam thi");
    }

    return 0;
}
