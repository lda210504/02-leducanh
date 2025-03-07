#include <stdio.h>

int main()
{
    float diem;

    printf("Nhap vao diem so: ");
    scanf("%f", &diem);

    if (diem < 5)
    {
        printf("Xep loai: Yeu\n");
    }
    else if (diem >= 5 && diem < 7)
    {
        printf("Xep loai: Trung Binh\n");
    }
    else if (diem >= 7 && diem < 8)
    {
        printf("Xep loai: Kha\n");
    }
    else if (diem >= 8 && diem < 9)
    {
        printf("Xep loai: Gioi\n");
    }
    else if (diem >= 9)
    {
        printf("Xep loai: Xuat Sac\n");
    }
    else
    {
        printf("Diem nhap vao khong hop le.\n");
    }

    return 0;
}
