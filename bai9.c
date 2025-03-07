#include <stdio.h>

int main()
{
    int m, y;
    int nhuan;
    int max_day;
    scanf("%d %d", &m, &y);

    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
    {
        nhuan = 1;
    }
    else
    {
        nhuan = 0;
    }

    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        max_day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        max_day = 30;
        break;
    case 2:
        if (nhuan == 1)
            max_day = 29;
        else
            max_day = 28;
        break;
    default:
        printf("Thang khong hop le!\n");
        return 1;
    }

    printf("Thang %d nam %d co %d ngay.\n", m, y, max_day);

    return 0;
}
