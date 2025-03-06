#include <stdio.h>

int main()
{
    int so1, so2;
    scanf("%d", &so1);
    scanf("%d", &so2);
    printf("Phep cong: %d\n", so1 + so2);
    printf("Phep tru: %d\n", so1 - so2);
    printf("Phep nhan: %d\n", so1 * so2);
    if (so2 != 0)
    {
        printf("Phep chia: %d\n", so1 / so2);
    }
    else
    {
        printf("khong the chia cho 0.\n");
    }
    return 0;
}
