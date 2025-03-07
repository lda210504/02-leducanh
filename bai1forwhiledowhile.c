#include <stdio.h>

int main()
{
    int tong = 0, x;
    int i
    printf("Nhap vao 10 so nguyen:\n");
    for ( i = 1; i <= 10; i++)
    {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &x);
        tong = tong + x;
    }

    printf("Tong cua 10 so nguyen la: %d\n", tong);

    return 0;
}
